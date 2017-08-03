#include <stdio.h>

#define MAX_NUM 1024
#define TRUE 1
#define FALSE 0
#define NEWLINE '\n'

int main() {
	int i;
	i = 10 + 2 + MAX_NUM;

	printf("%c", NEWLINE);
	printf("%d \n", 0xab); // 171
	printf("%d \n", 215u);
	printf("%ld \n", 30l);
	printf("%lu \n", 201lu);
	printf("%d \n", 011); // 9

	printf("%f \n", 3.1415);
	printf("%Lf \n", 3.1415E-5L);

	printf("%c \n", 'x');
	printf("%c \n", 'a');
	printf("%c \n", '\t');
	printf("%c \n", '\"');

	if (TRUE) {
		printf("TRUE \n");
	}

	if (!FALSE) {
		printf("FALSE \n");
	}

	return 0;
}
