#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 255

// Convert input digits to integer
// Output: "123" -> 123

int my_getline(char str[], int max) {
	int c;
	int i = 0;
	while (--max > 0 && (c=getchar()) != EOF && c != '\n') {
		str[i++] = c;
	}
	if (c == '\n') {
		str[i++] = c;
	}
	str[i] = '\0';
	return i;
}

int main() {
	printf("Input any numbers \n");
	char str[MAXLINE];
	my_getline(str, MAXLINE);
	printf("Your input is: %d \n", atoi(str));

	return 0;
}

