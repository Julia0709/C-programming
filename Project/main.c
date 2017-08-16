#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void) {

//	printf("argc: %d \n", argc);

//	for(int i = 0; i < argc; i++) {
//		printf("%s \n", argv[i]);
//	}


	readEntireFile();

	return EXIT_SUCCESS;
}

// $ ./command_line_arg ./inputfile3
// keywords: date, system, fflush
