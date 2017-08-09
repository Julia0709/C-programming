#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

// 2. multbytwo()
int multbytwo(int n) {
	return n * 2;
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

// 7. dicerolling()
float dicerolling() {
	int i, dice1, dice2;
	int a[13];

	for(i = 2; i <= 12; i++) {
		a[i] = 0;
	}

	for(i = 0; i < 100; i++) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		a[dice1 + dice2] = a[dice1 + dice2] + 1;
	}

	float sum = 0;
	for(i = 2; i <= 12; i++) {
		printf("%d: %d \n", i, a[i]);
		sum += i * a[i];
	}
	
	return sum / 100.0;
}

// 8. randrange() and randrange2()
int randrange(int n) {
	return rand() % n + 1;
}

int randrange2(int m, int n) {
	return (rand() % (m + n) + 1) - m; 
}

// 9. dicehistogram() 
void dicehistogram() {
	int i, dice1, dice2;
	int a[13];

	for(i = 2; i <= 12; i++) {
		a[i] = 0;
	}

	for(i = 0; i < 100; i++) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		a[dice1 + dice2] = a[dice1 + dice2] + 1;
	}

	for(i = 2; i <= 12; i++) {
		printf("%d: %d  ", i, a[i]);
		for(int j = 0; j < a[i]; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
}

