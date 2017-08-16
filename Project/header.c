#include <stdio.h>
#include <time.h>
#include "header.h"

#define MAX 256

void readEntireFile(void) {
	FILE *fp = fopen("inputfile1.txt", "r");

	char date[MAX] = {'\0'};

	time_t t = time(NULL);
	struct tm *timep = localtime(&t);
	strftime(date, MAX, "%a %b %d %T %Z %Y", timep);

	printf("started on %s \n", date);
	printf("Input file: inputfile1.txt \n");

//	int c = getc(fp);
//	while(c != EOF) {
//		putchar(c);
//		c = getc(fp);
//	}

	fclose(fp);
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

