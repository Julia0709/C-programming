#include <stdio.h>
#include "calc.h"

// 2. multbytwo()
void multbytwo(int n) {
	printf("%d \n", n * 2);
}

// 3. square()
int square(int n) {
	return n * n;
}

// 4. printnchars()
void printnchars(char ch, int n) {
	for(int i = 0; i < n; i++) {
		printf("%c", ch);
	}
	printf("\n");
}

// 5. factorial()
long factorial(int n) {
	return n == 0 ? 1 : n * factorial(n - 1);
}

// 6. celsius()
float celsius(float f) {
	return 5 * (f - 32) / 9;
}

