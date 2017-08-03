#include<stdio.h>
int main() {

	printf("About TWO's complement \n");

	// 1. Negative binary in TWO's complement
	//    Complement bits and add 1

	// 2. TWO's complement for 5-bit binary numbers
	// a. 01001 -> 10111
	// b. 01011 -> 10101
	// c. 00111 -> 11001
	// d. 00001 -> 11111
	
	// 3. All the positive numbers in TWO's complement
	//    Begin with a 0 to the left.

	// 4. Advantage of TWO's complement is
	//    There is only one way to represent 0.

	// 5. White 7(decimal) using TWO's complement
	//    0111
	//    Only convert to binary and begin 0.
	
	// 6. White -7(decimal) using TWO's complement
	//    1001
	//    Convert to binary, complenemt the binary and add 1
	
	// 7. Way to convert a decimal to TWO's complement
	// positive: just convert to binary
	// negative: convert the absolute value to binary, 
	//           reverse each bit and add 1 to the reversed binary. 
	
	// 8. Decimal to binary using 6-bit TWO's complement
	// a. -16 -> 110000 
	// b.  13 -> 001101
	// c.  -3 -> 111101
	// d  -10 -> 110110
	// e.  26 -> 011010
	// f. -31 -> 100001
	
	return 0;

}

