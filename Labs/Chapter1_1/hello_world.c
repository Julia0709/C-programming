#include<stdio.h>
int main() {

	// 1. Hello World!
	printf("Hello, World! \n");

	// 2. Loops
	int i;

	for(i = 0; i < 10; i = i + 2) {
		// Output: 0 2 4 6 8
		printf("%d \n", i);
	}

	for(i = 100; i >= 0; i = i - 7) {
		// Output: 100 93 86 79 72 65 58 51 44 37 30 23 16 9 2 
		printf("%d \n", i);
	}

	for(i = 1; i <= 10; i = i + 1) {
		// Output: 1 2 3 4 5 6 7 8 9 10
		printf("%d \n", i);
	}

	for(i = 2; i < 100; i = i * 2) {
		// Output: 2 4 8 16 32 64
		printf("%d \n", i);
	}

	// 3. Print the numbers from 1 to 10 and their squares
	for(i = 1; i <= 10; i++) {
		int square = i * i;
		printf("%d  %d \n", i, square);
	}

	// 4. Print a triangle
	for(i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

