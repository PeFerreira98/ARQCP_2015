# variaveis
INCLUDES = soma.h soma2.h
SOURCES = soma.s main.c soma2.c
OBJFILES = soma.o main.o soma2.o
EXEC = psoma

# regras de sufixo
.SUFFIXES : .c .o
.SUFFIXES : .s .o

# como transformar um .c e um .s num .o ; $< -- nome do ficheiro
.c.o:
	gcc -Wall -g -c $<

.s.o:
	gcc -Wall -g -c $<

${OBJFILES}: ${SOURCES} ${INCLUDES}

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}

all: ${EXEC}
