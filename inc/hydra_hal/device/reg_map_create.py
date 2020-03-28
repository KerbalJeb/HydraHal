# TODO Add cmd line param for input file
import xml.etree.ElementTree as ET

tree = ET.parse('STM32F411.svd')
root = tree.getroot()
FILE_NAME = "register_defs.h"
ACCESS_MAP = {'read-only': 'ro_bit_field',
              'write-only': 'wo_bit_field',
              'read-write': 'rw_bit_field'}


def create_field(field, access, address):
    bit_width = int(field.find('bitWidth').text)
    bit_offset = int(field.find('bitOffset').text)
    name = field.find('name').text
    mask = 2 ** bit_width - 1
    description = field.find('description').text.replace('\n', ' ')
    description = ' '.join(description.split())

    if access is None:
        access = field.find('access').text

    return f"\t\tconstexpr {ACCESS_MAP[access]} {name:23} {{ {address:#0{8}x},{mask:#0{8}x},{bit_offset:#0{8}x} }};\n"


def create_register_access(register, base_address, peripheral_name):
    address_offset = int(register.find('addressOffset').text, 16)
    address = address_offset + base_address
    register_name = register.find('name').text

    fields = register.find('fields')
    access = register.find('access')
    access = access.text if access is not None else None

    code_string = f"\tnamespace {register_name} {{\n"

    for field in fields:
        code_string += create_field(field, access, address)
    code_string += "\t}\n\n"
    return code_string


output_str = '#ifndef REG_DEF_HPP_\n#define REG_DEF_HPP_\n\n#include "reg.h"\nusing namespace hydra::core;\n\n'

for child in root:
    if child.tag == 'peripherals':
        for peripheral in child:
            peripheral_name = peripheral.find('name').text
            base_address = int(peripheral.find('baseAddress').text, 16)
            registers = peripheral.find('registers')

            if registers is None:
                derived_from = peripheral.attrib['derivedFrom']
                peripheral = [x for x in child if x.find('name').text == derived_from][0]
                registers = peripheral.find('registers')
            if registers:
                output_str += f"namespace {peripheral_name} {{\n"

            for register in registers:
                output_str += create_register_access(register, base_address, peripheral_name)

            if registers:
                output_str += "}\n\n"

output_str += "#endif"
with open(FILE_NAME, 'w+') as file:
    file.write(output_str)
