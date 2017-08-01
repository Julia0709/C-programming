#include<stdio.h>
#include<limits.h>
#include<float.h>

int main() {

	printf("MIN(SIGNED CHAR) %d\n", SCHAR_MIN);
	printf("MAX(SIGNED CHAR) %d\n", SCHAR_MAX);
	printf("MAX(UNSIGNED) %d\n", UCHAR_MAX);
	printf("Size of char: %lu\n", sizeof(char));

	printf("\n");

	printf("MIN(SHORT INT) %d\n", SHRT_MIN);
	printf("MAX(SHORT INT) %d\n", SHRT_MAX);

	printf("\n");
	
	printf("MIN(INT) %d\n", INT_MIN);
	printf("MAX(INT) %d\n", INT_MAX);

	printf("\n");
	
	printf("MIN(LONG) %ld\n", LONG_MIN);
	printf("MAX(LONG) %ld\n", LONG_MAX);

	printf("\n");
	
	printf("MIN(FLOAT) %.10e\n", FLT_MIN);
	printf("MAX(FLOAT) %.10e\n", FLT_MAX);
	
	return 0;
}

