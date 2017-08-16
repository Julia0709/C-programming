#include <stdio.h>
#include "header.h"

void readEntireFile(void) {
	FILE *fp = fopen("inputfile1.txt", "r");

	int c = getc(fp);
	while(c != EOF) {
		putchar(c);
		c = getc(fp);
	}

	fclose(fp);
}

void readUntilMarker(char marker) {

}

void writeToFile(void) {

}

