#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

#define MAX 256

struct counter {
	char word[MAX];
	int count;
	char message[MAX];
	struct counter *next;
};

static struct counter list[] = {
	{"Image", 0, "Image definition(s)"},
	{"lineTo", 0, "lineTo command(s) within Figures"},
	{"End", 0, "End command(s)"},
	{"print", 0, "print command(s)"},
	{"draw", 0, "draw command(s)"},
	{"translate", 0, "translate command(s)"},
	{"child", 0, "child command(s)"},
	{"#", 0, "comment(s)"},
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
		printf("%d %s \n", ptr->count, ptr->message);
		ptr = ptr->next;
	}
}

// Count each word
int count_word(struct counter *ptr, char *token) {
	// Define linked list node
	struct counter *head = define_next();

	while(ptr != NULL) {
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
int read_file(FILE *fp) {
	// Check the file size
	fseek(fp, 0, SEEK_END);
	long fsize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	char *str = malloc(fsize + 1);
	fread(str, fsize, 1, fp);

	const char L[2] = "\n";
	char *line = strtok(str, L);
//	while(line != NULL) {
//		const char S[2] = " ";
//		char *token = strtok(str, S);
//		printf("token1: %s \n", token);


//		char *line = strtok(str, L);
//		token = strtok(NULL, S);
//		line = strtok(NULL, L);
//	}

 	while(line != NULL) {
		printf("%s \n", line);

//		const char S[2] = " ";
//		char *token = strtok(line, S);
//		printf("token: %s \n", token);

		count_word(list, line);
		line = strtok(NULL, L);
	}

	print_result(list);
	return 0;
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

