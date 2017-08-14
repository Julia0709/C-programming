#include <stdio.h>

// int getline(char line[], int max);

int main() {
	// 1. (c = getcher()) != EOF
	// EOF means END OF FILE
	// When there is no more input, EOF is recieved.
	char c;
	while((c = getchar()) != EOF) {
	        putchar(c);
	}

	// 2. The variable used to hold getchar's return value must be int
	// So that it can reliably store the value EOF

	// 3. The difference between the prefix and postfix forms of the ++ operator
	// prefix : increments first
	//          the incremented value goes on to participate
	// postfix: increments later
	//          the previous value goes on to participate
	
	// 4. i = i++
	// Undefined  compile error

	// 5. The definition of a string in C
	// An array of characters, terminated with the null character \0
	
	// 6. The getline function do if successive calls to getchar
	//    return the four values 'a', 'b', 'c', and EOF
 	// The first three characters are placed in the line array 
	// and when the EOF indicator is read, getline breaks out of its loop
	int getline(char line[], int max) {
		int nch = 0;
		int c;
		max = max - 1;  // leave room for ‘\0’

		while((c = getchar()) != EOF) {
			if(c == '\n')
			break;

			if(nch < max) {
				line[nch] = c;
				nch = nch + 1;
			}
		}

		if(c == EOF && nch == 0)
			return EOF;

		line[nch] = '\0';
		return nch;
	}

	return 0;
}
