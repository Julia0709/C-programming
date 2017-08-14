#include <stdio.h>

// Return each of your input letter
// (Control + C to terminate this program)
// Output: "hello" -> "h" "e" "l" "l" "o"

int main() {
	printf("Type something here: \n");

	char c;
	while((c = getchar()) != EOF) {
		// putchar(c);
		printf("%c \n", c);
	}

	return 0;
}

