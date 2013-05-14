CC = avr-gcc
OBJCPY = avr-objcopy

out:
	${CC} -Os -DF_CPU=16000000UL -mmcu=atmega328p -o blink.out blink.c

hex:
	${OBJCPY} -O ihex -R .eeprom blink.out blink.hex

.PHONY: clean

clean:
	rm *.out
	rm *.hex