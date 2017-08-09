#include <stdio.h>
#include "calc.h"

int main() {
	// 1. sum of all elements in an array
	int a[] = {1, 2, 3, 4, 5, 6};
	
	int sum = 0;
	int length = sizeof(a) / sizeof(int);
	for(int i = 0; i < length; i++) {
		sum += a[i];
	}
	printf("Sum: %d \n", sum);
	
	// 2. a loop to call multbytwo()
	for(int i = 1; i <= 10; i++) {
		multbytwo(i);	
	}
	
	// 3. square()
	// Output: 1 4 9 16 ... 100 
	for(int i = 1; i <= 10; i++) {
		printf("%d: %d \n", i, square(i));
	}

	// 4. void printnchars(char ch, int n);
	// Output: xxxxx
	printnchars('x', 5);

	// 5. factorial()
	// Output: 1 2 6 24 ... 3628800
	for(int i = 0; i < 10; i++) {
		printf("%d: %ld \n", i, factorial(i));
	}

	// 6. celsius()
	// Output: 
	for(float f = -40; f <= 220; f+=10) {
		printf("%.0f ºF = %.2f ºC \n", f, celsius(f));
	}

	return 0;
}

