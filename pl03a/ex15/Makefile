# variaveis
INCLUDES =preencher.h comparar.h contabilizar.h
SOURCES = comparar.c contabilizar.c preencher.c main.c
OBJFILES = comparar.o contabilizar.o preencher.o main.o
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
