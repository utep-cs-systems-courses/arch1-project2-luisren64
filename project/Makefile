#configuration
COMMON_OBJECTS	=	
CPU		= msp430g2553
CFLAGS		= -mmcu=${CPU} -I../demos/h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC		= msp430-elf-gcc
AS		= msp430-elf-as


install:
	(cd ../demos/timerLib; make install)

all: toy.elf

toy.elf: ${COMMON_OBJECTS}  stateMachines.o led.o switches.o buzzer.o wdInterruptHandler.o p2_interrupt_handler.o ../demos/lib/libTimer.a toyMain.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: toy.elf
	msp430loader.sh toy.elf

clean: 
	(cd ../demos; rm -rf lib h)
	(cd ../demos/timerLib; make clean)
	rm -f *.o *.elf

led.o: led.c led.h

buzzer.o: buzzer.c buzzer.h

wdInterruptHandler.o: stateMachines.h

p2_interrupt_handler.o: switches.h

stateMachines.o: stateMachines.c stateMachines.h

switches.o: switches.h switches.c
