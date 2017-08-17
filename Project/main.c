#include <stdio.h>
#include <stdlib.h>
#include "header.h"

// conpile(LINUX)
// gcc -o main header.c main.c
// run
// $ ./main inputfile1.txt

int main(int argc, char *argv[]) {

	if (argc < 2) {
		printf("Missing a filename \n");
		return(1);
	}

	printf("%s ", argv[0]);
	
	char *filename = argv[1];
	open_file(filename);

	return EXIT_SUCCESS;
}

