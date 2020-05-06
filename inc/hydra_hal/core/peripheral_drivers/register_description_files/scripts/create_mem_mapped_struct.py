import xml.etree.ElementTree as ET

# todo Add cmd line args

FILE_PATH = "../RCC.xml"
ACCESS_MAP = {'read-write': '',
              'read-only': 'const ',
              'write-only': ''}

tree = ET.parse(FILE_PATH)
root = tree.getroot()
output_text = ""
for peripheral in root.iter('peripheral'):
    name = peripheral.find("name").text
    output_text += f'#ifndef {name.upper()}_H\n#define {name.upper()}_H\n\n#include "bit_fields.h"\n\n'
    output_text += f"class {name.capitalize()}Registers {{\n"
    reserved_idx = 0
    for register in peripheral.iter('register'):
        reg_name = register.find('name').text
        access = register.find('access').text if register.find('access') is not None else None
        padding = int(register.find('padding').text)
        union_text = ""
        if padding > 0:
            output_text += f"private:\n\tstd::uint32_t res{reserved_idx}[{padding}];\n"
            output_text += f"public:\n"
            reserved_idx += 1

        output_text += f"\t/*{reg_name.upper()}*/\n"
        union_text += f"\tunion {{\n\t\tstd::uint32_t raw_{reg_name.lower()};\n"

        for field in register.iter('bit_field'):
            if access is None:
                bf_access = field.find('access').text
            else:
                bf_access = access

            bf_name = field.find('name').text.lower()
            bf_offset = field.find('offset').text
            bf_width = field.find('width').text
            values = field.find('values')

            if values:
                type_name = values.find('name')
                if type_name is not None:
                    type_name = type_name.text
                else:
                    type_name = bf_name.capitalize() + 'Values'

                if values.find('value') is not None:
                    output_text += f"\tenum class {type_name}{{\n"
                    for value in values.iter('value'):
                        output_text += f'\t\t{value.text}={value.get("num")},\n'
                    output_text += '\t};\n'
            else:
                type_name = "std::uint32_t"

            union_text += f"\t\t{ACCESS_MAP[bf_access]}bit_field<{type_name}, {bf_width}, {bf_offset}> {bf_name};\n"

        output_text += union_text
        output_text += '\t};\n'
    output_text += '};\n#endif'

print(output_text)
