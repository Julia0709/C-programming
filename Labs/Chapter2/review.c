#include<stdio.h>

int main() {

	// 1. "/" operator can divide
	//    when x / y && x < y
	//    - Devide int / float or double
	//    - Devide float or double / int

	// 2. Boolean in C
	//    True : 1
	//    False: 0

	// 3. Semicolon in C
	//    - int i; <- end of a line
	//    - ; <- empty method
	//    - for(;;) <- infinite loop

	// 4. Rewrite for loop with while loop
	int i;
	for(i = 0; i < 10; i++) {
		printf("i is %d \n", i);
	}

	i = 0;
	while(i < 10) {
		printf("i is %d \n", i);
		i++;
	}

	// 5. Numeric value of 3 < 4
	//    1 (True)

	// 6. The condition when "water" is printed
	//    32 <= T < 212
	int T = 0;
	if(T < 32)
		printf("ice \n");
	else if(T < 212)
		printf("water \n");
	else	printf("steam \n");

	// 7. The output of the below code
	//    "YES"
	int x = 3;
	if(x)	printf("YES \n");
	else	printf("NO \n");

	// 8. The output of the below code
	//    a a a b c
	for(i = 0; i < 3; i = i + 1)
		printf("a \n");
		printf("b \n");
	printf("c \n");

	return 0;
}
