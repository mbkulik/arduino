CC = avr-gcc
OBJCPY = avr-objcopy
PLATFORM = atmega328p

SRC = blink.c
OBJ = blink.out
HEX = blink.hex

blink.out: ${SRC}
	${CC} -Os -DF_CPU=16000000UL -mmcu=${PLATFORM} -o ${OBJ} ${SRC}

blink.hex: ${OBJ}
	${OBJCPY} -O ihex -R .eeprom ${OBJ} ${HEX}

upload: ${HEX}
	avrdude -p ${PLATFORM} -c arduino -P /dev/tty.usbmodem621 \
	-b 115200 -D -U flash:w:${HEX}

.PHONY: clean

clean:
	rm ${OBJ}
	rm ${HEX}
