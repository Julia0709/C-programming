#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 127

int my_getline(char str[], int max) {
	int i;

	for (i = 0; i < max; i++) {
		int c = getchar();

		if(c == '\n')
			break;

		if(c == EOF)
			return c;

		str[i] = c;
	}

	str[i] = '\0';	
	return i;
}

int main() {
	double balance = 0.0;
	char line1[MAXLINE], line2[MAXLINE];

	while(my_getline(line1, MAXLINE) > 0) {
		my_getline(line2, MAXLINE);

		if(strcmp(line1, "deposit") == 0)
			balance += atof(line2);
		else if(strcmp(line1, "check") == 0)
			balance -= atof(line2);
		else	{
			printf("bad data line: not \"check\" or \"deposit\"\n");
			continue;
			}

		printf("balance: %.2f \n", balance);
	}
	
	return 0;
}

