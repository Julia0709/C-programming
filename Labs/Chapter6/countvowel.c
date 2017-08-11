#include <stdio.h>
#include <ctype.h>

// Input until Enter is pressed
// and count senctences and vowels.
// Output: You entered 2 sentences containing 9 vowels!

int main() {
	int c, sentences = 0, vowels = 0;

	printf("Type several sentences: \n");
	for(;;) {
		c = tolower(getchar());

		if(c == '\n') {
			break;
		}

		if(c == '.' || c == '!' || c == '?') {
			++sentences;
		}

		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			++vowels;
		}
	}

	printf("You entered %d sentences containing %d vowels! \n", sentences, vowels);	
	return 0;
}
