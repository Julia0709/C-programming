#include <stdio.h>

int main() {

	// 1. "/" operator can do
	//    - Integer division
	//    - Floating-point division

	// 2. Boolean in C
	//    True : 1 or any other nonzero numbers
	//    False: 0
	//    operators return 0 for false or 1 for true

	// 3. Semicolon in C
	//    - end of a declaration
	//    - end of a statement
	//    - in for loop control expressions

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

