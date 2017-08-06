#include<stdio.h>

// Method for Q5
int fibonacci(int n) {
	if(n < 2) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	
	// 1. Compute how many of the numbers from 1 to 10 are greater than 3
	//    Output: 7
	int count = 0;
	for(int i = 1; i <= 10; i++) {
		if(i > 3) {
			count++;
		}
	}
	printf("The amount of numbers from 1 to 10 which are greater than 3: \n");
	printf("%d \n", count);
	
	// 2. Compute the average of the ten squares of the numbers from 1 to 10
	// Output: 38.5 
	float sum = 0;
	for(int i = 1; i <= 10; i++) {
		sum += i * i;
	}
	printf("Average: %.1f \n", sum/10);
	
	// 3. Print the numbers between 1 to 10 with even or odd
	// Output: 1 odd  2 even  3 odd  4 even  5 odd  6 even  
	//         7 odd  8 even  9 odd  10 even 
	for(int i = 1; i <= 10; i++) {
		printf("%d:  %s \n", i, (i % 2 == 0) ? "EVEN" : "ODD");
	}

	// 4. Print the first 7 positive integers and their factorials
	// Output: 1 and 1  2 and 4  3 and 6  4 and 24 ... 7 and 5040
	for(int i = 1; i <= 7; i++) {
		int factorial = 1;
		for(int j = 1; j <= i; j++) {
			factorial *= j;
		}
		printf("%d:  %d \n", i, factorial);
	}
	
	// 5. Print the first 10 Fibonacci numbers
	// Output: 0 1 1 2 3 5 8 13 21 34
	int n = 0;
	while(n < 10) {
		printf("%d: %d \n", n + 1, fibonacci(n));
		n++;
	}

	return 0;
}

