# variaveis
INCLUDES = media.h
SOURCES = media.c main.c
OBJFILES = media.o main.o
EXEC = pmedia

# regras de sufixo
.SUFFIXES : .c .o

# como transformar um .c num .o ; $< -- nome do ficheiro
.c.o:
	gcc -Wall -g -c $<

${OBJFILES}: ${SOURCES} ${INCLUDES}

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}