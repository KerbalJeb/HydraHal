import csv
import re


def atoi(text):
    return int(text) if text.isdigit() else text


def natural_keys(text):
    '''
    alist.sort(key=natural_keys) sorts in human order
    http://nedbatchelder.com/blog/200712/human_sorting.html
    (See Toothy's implementation in the comments)
    '''
    return [atoi(c) for c in re.split(r'(\d+)', text)]


pin_map = []
with open('pinout.csv') as csvfile:
    reader = csv.reader(csvfile)
    for row in reader:
        pin_map.append(row)

pins = [row[1] for row in pin_map]
pins.sort(key=natural_keys)
for pin in pins:
    match = re.findall(r'P([A-Z])([0-9]{1,2})', pin)
    if len(match) == 1:
        port = match[0][0]
        pin_idx = match[0][1]
        print(f'constexpr gpio_pin P{port}{pin_idx:2} {{gpio{port.lower()}, {pin_idx:2}}};')
    else:
        continue
