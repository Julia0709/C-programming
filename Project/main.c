#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char *argv[]) {

	if (argc < 2) {
		printf("No such a filename \n");
		return(1);
	}

	printf("%s ", argv[0]);
	
	char *filename = argv[1];
	open_file(filename);

	printf("------------------------------ \n");

//	readUntilMarker('a');


	return EXIT_SUCCESS;
}

// $ ./command_line_arg ./inputfile3
// keywords: date, system, fflush
