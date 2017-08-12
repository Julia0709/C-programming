#include <stdio.h>
#include <string.h>

#define MAXLINE 255

extern int getline(char [], int);
extern int reverse(char [], int);

int main() {
	char line[MAXLINE];
	int len;

	while((len = getline(line, MAXLINE)) != EOF) {
		reverse(line, len);
		printf("%s\n", line);
	}

	return 0;
}

int reverse(char string[], int len) {
	int i;
	char tmp;
	for(i = 0; i < len / 2; i = i + 1) {
		tmp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = tmp;
	}
	return 0;
}
