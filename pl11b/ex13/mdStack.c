#include <stdio.h>
#include <stdlib.h>

int *dinStack;
int dinStack_size;

void push(int i){
	int *dinStack_tmp = NULL;
	
	dinStack_tmp = (int*) realloc(dinStack, (dinStack_size+2) * sizeof(int) );
	
	if(dinStack_tmp == NULL){
		printf("something went wrong... (push)(dinStack_tmp - realloc)\n");
		return;
	}
	dinStack = dinStack_tmp;
	dinStack_tmp = NULL;
	
	*(dinStack+dinStack_size) = i;
	
	dinStack_size++;
}

int pop(){
	int *dinStack_tmp = NULL;
	int result;
	
	if(dinStack_size == 0){
		printf("something went wrong... (pop)(Stack is empty!)\n");
		return -1;
	}
	
	if(dinStack_size == 1){
		result = *(dinStack+dinStack_size-1);
		
		free(dinStack);
		
		dinStack_tmp = (int*) calloc (1, sizeof(int));
		
		if(dinStack_tmp == NULL){
			printf("something went wrong... (pop)(dinStack_tmp - calloc)\n");
			return -1;
		}
		dinStack = dinStack_tmp;
		dinStack_tmp = NULL;
		
		dinStack_size--;
		return result;
	}
		
	result = *(dinStack+dinStack_size-1);
	
	dinStack_tmp = (int*) realloc(dinStack, (dinStack_size-1) * sizeof(int) );
	
	if(dinStack_tmp == NULL){
		printf("something went wrong... (pop)(dinStack_tmp - realloc)\n");
		return -1;
	}
	dinStack = dinStack_tmp;
	dinStack_tmp = NULL;
	
	dinStack_size--;
	
	return result;
}

