#include <stdio.h>
#include <limits.h>
#include <math.h>

void ex01(){
	int x = 5;
	int *xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	printf("\n x: %d, y: %f", x, y);
	printf("\n &x: %p, &xPtr: %p", &x, &(xPtr));
	printf("\n xPtr: %p", xPtr);
	printf("\n vec: %p", vec);
	printf("\n vec[0]: %d, vec[1]: %d, vec[2]: %d", vec[0], vec[1], vec[2]);
	printf("\n &vec[0]: %p, &vec[1]: %p, &vec[2]: %p", &vec[0], &vec[1], &vec[2]);
	
	printf("\n");
}