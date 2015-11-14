#include <stdio.h>
#include <limits.h>

void ex12(char *a){
	
	while (*a != '\0'){
		if (*a == ' '){
			a++;
			if(*a>96 && *a<123){
				*a = *a-32;
			}
		}
		a++;
	}
	
}
