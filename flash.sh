arm-none-eabi-objcopy -I ihex --output-target=binary Debug/ProximitySensorTest.hex Debug/ProximitySensorTest.bin
st-flash write Debug/ProximitySensorTest.bin 0x8000000
