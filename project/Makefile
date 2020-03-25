#configuration
COMMON_OBJECTS	=	
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -I ../demos/h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC		= msp430-elf-gcc
AS		= msp430-elf-as

all: toy.elf

install: ../demos/timerLib/ make install

toy.elf: ${COMMON_OBJECTS} toyMain.o stateMachines.o led.o buzzer.o wdInterruptHandler.o p2_interrupt_handler.o switches.o

load: toy.elf
	msp430loader.sh toy.elf

clean: rm -f *.o *.elf


led.o: led.c led.h

buzzer.o: buzzer.c buzzer.h

wdInterruptHandler.o: wdInterruptHandler.c

p2_interrupt_handler.o: p2_interrupt_handler.c

switches.o: switches.c switches.h
