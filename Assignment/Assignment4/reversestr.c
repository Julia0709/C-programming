#include <stdio.h>
#include <string.h>

#define MAXLINE 255

extern int my_getline(char [], int);
extern int reverse(char [], int);

int main() {
	printf("Type something: \n");

	char str[MAXLINE];
	int l;

	while((l = my_getline(str, MAXLINE)) != EOF) {
		reverse(str, l);
		printf("%s \n", str);
	}

	return 0;
}

int my_getline(char str[], int max) {
	int i;
	for (i = 0; i < max; i++) {
		int c = getchar();

		if(c == '\n') {
			break;
		}

		if(c == EOF) {
			return c;
		}

		str[i] = c;
	}

	str[i] = '\0';	
	return i;
}

int reverse(char str[], int l) {
	for(int i = 0; i < l / 2; i++) {
		int s = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = s;
	}

	return 0;
}
