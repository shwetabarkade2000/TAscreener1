SRCDIR = ../src
INCLUDEDIR = ../include
OBJDIR = ../obj
BINDIR = ../bin
CFLAGS = -c -g -Wall -I${INCLUDEDIR}


all:
		
		gcc ${CFLAGS}  ${SRCDIR}/main.c -o ${OBJDIR}/main.o
		gcc ${CFLAGS}  ${SRCDIR}/select.c -o ${OBJDIR}/select.o
		gcc ${CFLAGS}  ${SRCDIR}/load.c -o ${OBJDIR}/load.o
		gcc ${CFLAGS}  ${SRCDIR}/showMovingAverage.c -o ${OBJDIR}/showMovingAverage.o
		gcc ${OBJDIR}/main.o ${OBJDIR}/select.o ${OBJDIR}/load.o ${OBJDIR}/showMovingAverage.o -o ${BINDIR}/project.bin

clean:

	rm ${OBJDIR}/main.o ${BINDIR}/project.bin
