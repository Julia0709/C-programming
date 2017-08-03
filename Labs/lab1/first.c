#include<stdio.h>

int main() {
	// 1. Read two integers and sum
	int a, b, sum;

	printf("Input 2 integers separated by a space: \n");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("The sum: %d \n", sum);

	
	// 3. Use arrays and loop
	int nums1[5], nums2[5];
	int i, counter;

	for (i = 0; i < 5; i++) {
		counter = i + 1;
		printf("%d. Input 2 integers separated by a space: \n", counter);
		scanf("%d %d", &nums1[i], &nums2[i]);
	}

	printf("Inputs: \n");
	for (i = 0; i < 5; i++) {
		counter = i + 1;
		printf("%d: %d and %d \n", counter, nums1[i], nums2[i]);
	}

	
	// 4. Basic C data types
	printf("Data types: \n");
	printf("int    4 bytes \n");
	printf("char   1 byte \n");
	printf("float  4 bytes \n");
	printf("double 8 bytes \n");
	printf("short  4 bytes \n");
	printf("long   8 bytes \n");

	return 0;
}

