#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

#define MAX 256

void open_file(char *filename) {
	FILE *fp = fopen(filename, "r");

	if(fp) {
		char date[MAX] = {'\0'};
		time_t t = time(NULL);
		struct tm *timep = localtime(&t);
		strftime(date, MAX, "%a %b %d %T %Z %Y", timep);

		printf("started on %s \n", date);
		printf("Input file: %s \n", filename);

		printf("---------------------------------------------- \n");
		read_file(fp);

		fclose(fp);
	} else {
		printf("failed to open %s \n", filename);
	}
}

void read_file(FILE *fp) {
	// Check the file size
	fseek(fp, 0, SEEK_END);
	long fsize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	char *str = malloc(fsize + 1);
	fread(str, fsize, 1, fp);

	const char s[2] = " ";
	char *token = strtok(str, s);
	printf("token: %s \n", token);

// 	while( token != NULL ) {
//		printf( " %s\n", token );
//		token = strtok(NULL, s);
//	}

}

void writeToFile(void) {

}

