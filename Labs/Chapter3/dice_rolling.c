#include <stdio.h>
#include <stdlib.h>

int main() {
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
		printf("%d: %d \n", i, a[i]);
	}

	return 0;
}

