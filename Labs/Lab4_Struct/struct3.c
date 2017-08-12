#include <stdio.h>

#define N 4

struct student {
	char name[20];
	int eng;
	int math;
	int phys;
	double mean;
	char grade;
};

static struct student data[] = {
	{"Jack", 82, 72, 58, 0.0},
	{"Young", 77, 82, 79, 0.0},
	{"Steeve", 52, 62, 39, 0.0},
	{"Mark", 61, 82, 88, 0.0}
};

int main() {
	
	for(int i = 0; i < N; i++) {
		struct student *d = &data[i];
		
		double *m = &d->mean;
		*m = (d->eng + d->math + d->phys) / 3.0;
		char *g = &d->grade;
		
		if(*m <= 100 && *m >= 90) {
			*g = 'S';
		} else if(*m >= 80) {
			*g = 'A';
		} else if(*m >= 70) {
			*g = 'B';
		} else if(*m >= 60) {
			*g = 'C';
		} else {
			*g = 'D';
		}
	}

	for(int i = 0; i < N; i++) {
		struct student *d = &data[i];
		printf("%7s: Eng = %3d  Math = %3d  Phys = %3d:  Mean = %5.1f  Grade = %c \n",
					d->name, d->eng, d->math, d->phys, d->mean, d->grade);
	}

	return 0;
}

