#include <stdio.h>

int main() {
	// Both loops are the same meaning
	
	// 1. for loop
	for(int i = 25; i >= 0; i--)
		printf("%c", 'z' - i);
	printf("\n");

	// 2. while loop
	int i = 25;
	do {
		printf("%c", 'z' - i);
		i--;
	} while(i >= 0);
	printf("\n");

	return 0;
}

