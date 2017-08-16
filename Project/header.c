#include <stdio.h>
#include <time.h>
#include <string.h>
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

		fclose(fp);
	} else {
		printf("failed to open %s \n", filename);
	}
}

void readUntilMarker(char marker) {
	FILE *fp = fopen("inputfile1.txt", "r");

	int c = getc(fp);
	while(c != marker) {
		putchar(c);
		c = getc(fp);
	}

	fclose(fp);
}

void writeToFile(void) {

}

