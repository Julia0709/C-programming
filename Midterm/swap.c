#include <stdio.h>

void swap(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {	
	int x = 1;
	int y = 2;

	printf("Before swap: \nx = %d  y = %d \n", x, y);
	
	swap(&x, &y);
	
	printf("After swap: \nx = %d  y = %d \n", x, y);

	return 0;
}

