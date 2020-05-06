import csv
import re


def atoi(text):
    return int(text) if text.isdigit() else text


def natural_keys(text):
    return [atoi(c) for c in re.split(r'(\d+)', text)]


pin_map = []
with open('../../../../device/pinout.csv') as csvfile:
    reader = csv.reader(csvfile)
    for row in reader:
        pin_map.append(row)

pin_map = [(row[1], row[5:-1]) for row in pin_map]

pin_map.sort(key=lambda x: natural_keys(x[0]))
for pin, alt_function in pin_map:
    match = re.findall(r'P([A-Z])([0-9]{1,2})', pin)

    if len(match) == 1:
        port = match[0][0]
        pin_idx = match[0][1]

        print(f'enum class P{port}{pin_idx}_AF : std::uint32_t{{')
        if not all('' == s for s in alt_function):
            for idx, af_names in enumerate(alt_function):
                if af_names:
                    for af in af_names.split("/"):
                        af = af.replace('-', '_')
                        print(f'\t{af}=0x{idx:x},')
        print("};")

        print(f'using P{port}{pin_idx:2} =  GpioPin<gpio{port.lower()}_addr, {pin_idx:2}, P{port}{pin_idx}_AF>;')
    else:
        continue
