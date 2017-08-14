#include <stdio.h>

#define MAXLINE 255

// Return your inputs until pressed control + C
// Output: "hello" -> "hello"

int getlinetest(char line[], int max) {
	int nch = 0;
	int c;
        max = max - 1;  // leave room for ‘\0’
	
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			break;
		}
		if(nch < max) {
			line[nch] = c;
			nch++;
		}
	}

	if(c == EOF && nch == 0) {
		return EOF;
	}

	line[nch] = '\0';
	return nch;
}

int main() {
	printf("Type something: \n");

	char str[MAXLINE];
	while(getlinetest(str, MAXLINE) != EOF) {
		printf("Your input is: \n");
		printf("%s \n", str);
	}

	return 0;
}

