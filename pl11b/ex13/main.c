#include <stdio.h>
#include <stdlib.h>
#include "mdStack.h"

extern int *dinStack;
extern int dinStack_size;

void print_Stack(){
	int i=0;
	printf("%d >> ", dinStack_size);
	for (i = 0; i < dinStack_size; i++) printf("%d ", *(dinStack+i));
	printf("\n");
}

int main(){
	int *tmp = NULL;
	int i=0;

	tmp = (int*) calloc (1, sizeof(int));
	if(tmp == NULL){
		printf("something went wrong... (dinStack_tmp - calloc)\n");
		return -1;
	}
	dinStack = tmp;
	tmp = NULL;
	
	dinStack_size = 0;
	
	
	print_Stack();
	
	push(40000000); push(13); push(12); push(13); push(12); push(13); push(13); push(12); push(13);
	print_Stack();

	i=pop(); i=pop(); i=pop(); i=pop(); i=pop(); i=pop(); i=pop(); i=pop(); i=pop(); i=pop();
	print_Stack();
	
	push(40000000); push(13); i=pop(); push(24); push(156); push(77); i=pop(); i=pop(); 
	print_Stack();

	free(dinStack);
	return 0;
}



