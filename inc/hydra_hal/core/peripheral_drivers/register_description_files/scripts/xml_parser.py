import xml.etree.ElementTree as ET

# todo Add cmd line args

tree = ET.parse('device/STM32F411.svd')
root = tree.getroot()

TARGET_PERIPHERAL_NAME = "RCC"

new_root = ET.Element("peripheral")
ET.SubElement(new_root, 'name').text = TARGET_PERIPHERAL_NAME

for peripheral in root.iter('peripheral'):
    if peripheral.find("name").text == TARGET_PERIPHERAL_NAME:
        last_offset = -4
        for register in peripheral.iter('register'):
            reg_name = register.find('displayName').text
            offset = int(register.find('addressOffset').text, 16)
            access = register.find('access').text if register.find('access') is not None else None
            preceding_reserved_registers = 0

            if offset - last_offset > 4:
                preceding_reserved_registers = (offset - last_offset - 4) // 4
            last_offset = offset

            new_reg = ET.SubElement(new_root, 'register')
            ET.SubElement(new_reg, 'padding').text = str(preceding_reserved_registers)
            ET.SubElement(new_reg, 'name').text = reg_name

            for field in register.iter('field'):
                if access is None:
                    bf_access = field.find('access').text
                else:
                    bf_access = access

                bf_name = field.find('name').text
                bf_offset = field.find('bitOffset').text
                bf_width = field.find('bitWidth').text

                new_bf = ET.SubElement(new_reg, 'bit_field')
                ET.SubElement(new_bf, 'name').text = bf_name
                ET.SubElement(new_bf, 'offset').text = bf_offset
                ET.SubElement(new_bf, 'width').text = bf_width
                ET.SubElement(new_bf, 'access').text = bf_access

new_tree = ET.ElementTree(new_root)
new_tree.write(f"{TARGET_PERIPHERAL_NAME}.xml")
