#include <stdio.h>

void swap(int *p1, int *p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 =tmp;
}

void print_addr(int x) {
	printf("Variable address is: %p \n", (void*)&x);
}

int *new_integer() {
	int n  = 123;
	int *addr = &n;
	return addr;
}

void print_array(int arr[], int l) {
	for(int i = 0; i < l; i++) {
		printf("arr[%d]: %d \n", i, *(arr + i));
	}
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

	// 4. Print a variable's address
	int v = 1111;
	printf("Variable address is: %p \n", &v);
	print_addr(v);

	// 5. Declare and initialize an integer in function
	// The function will point the above v address and override the value v
	printf("Address is: %p \n", new_integer());
	printf("v: %d \n", *new_integer());

	// 6. Print all vallues of an integer array
	int l = sizeof(arr) / sizeof(arr[0]);
	print_array(arr, l);

	return 0;
}

