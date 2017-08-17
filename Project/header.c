#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

#define MAX 256

struct counter {
	char word[MAX];
	int count;
	struct counter *next;
};

static struct counter list[] = {
	{"Image", 0},
	{"lineTo", 0},
	{"End", 0},
	{"print", 0},
	{"draw", 0},
	{"translate", 0},
	{"child", 0},
	{"#", 0},
};

// Define nexts for linked list
struct counter *define_next() {
	struct counter *head = &list[0];
	for (int i = 1; i < 8; i++) {
		head->next = &list[i];
		head = head->next;
	}
	return head;
}

// Print count result
void print_result(struct counter *ptr) {
	while(ptr != NULL) {
		printf("word: %s  count: %d \n", ptr->word, ptr->count);
	}
}

// Count each word
int count_word(struct counter *ptr, char *token) {
	// Define linked list node
	struct counter *head = define_next();

	while (ptr != NULL) {
		if(strcmp(ptr->word, token) == 0) {
			ptr->count++;
			printf("word: %s \n", ptr->word);
			printf("count: %d \n", ptr->count);
			return 0;
		}
		ptr = ptr->next;
	}
	return 0;
}

// Read input file and convert to string
char *read_file(FILE *fp) {
	// Check the file size
	fseek(fp, 0, SEEK_END);
	long fsize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	char *str = malloc(fsize + 1);
	fread(str, fsize, 1, fp);

	const char s[2] = " ";
	char *token = strtok(str, s);
	printf("token1: %s \n", token);

	count_word(list, token);
// 	while( token != NULL ) {
//		printf( " %s\n", token );
//		token = strtok(NULL, s);
//	}

	return token;
}

// Open file and display time
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

