#include <stdio.h>

void swap(int *p1, int *p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 =tmp;
}

int main() {
	// 1. Swap values
	int x = 10, y = 20;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	// 2. Output a value of an array using pointer
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *pa = &arr[0];
	printf("Value of arr[0]: %d \n", *pa);
	printf("Size of arr: %lu \n", sizeof(arr));  // 4bits * 10

	// 3. Output an array using pointer
	for(int i = 0; i < sizeof(arr) / sizeof(*pa); i++) {
		printf("arr[%d]: %d \n", i, *(arr + i));
	}

	return 0;
}

