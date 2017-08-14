#include <stdio.h>

long factorial_loop(int n);
long factorial(int n);
long fibonacci(int n);
long bunny_ears_loop(int n);
long bunny_ears(int n);
long power_n(int base, int n);
long sum_digits_loop(int n);
long sum_digits(int n);

int main() {
	int n = 0;
	int i = 1;
	// 1. Factorial
	while(n < 10) {
		printf("%d: %ld \n", i, factorial(n));
		i++;
		n++;
	}

	n = 0;
	i = 1;
	// 2. Fibonacci
	while(n < 10) {
		printf("%d: %ld \n", i, fibonacci(n));
		i++;
		n++;
	}

	n = 0;
	i = 1;
	// 3. Bunny Ears
	while(n < 10) {
		printf("%d: %ld \n", i, bunny_ears(n));
		i++;
		n++;
	}

	n = 0;
	i = 1;
	// 4. Power N
	while(n < 10) {
		printf("%d: %ld \n", i, power_n(3, n));
		i++;
		n++;
	}

	n = 0;
	i = 1;
	// 5. Sum Digits
	printf("%d: %ld \n", i, sum_digits(123));

	return 0;
}

// 1. Factorial
// for roop
long factorial_loop(int n) {
	long f = 1;
	if(n <= 0) {
		return f;
	}
	for(int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}

// recursion
long factorial(int n) {
	return n == 0 ? 1 : n * factorial(n - 1);
}

// 2. Fibonacci
long fibonacci(int n) {
	return n < 2 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Banny ears
// for loop
long bunny_ears_loop(int n) {
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += (i % 2 == 0 ? 3 : 2);
	}
	return sum;
}

// recursion
long bunny_ears(int n) {
	if(n == 0) {
		return 0;
	}
	return (n % 2 == 0 ? 3 : 2) + bunny_ears(n - 1);
}

// 4. Power N
long power_n(int base, int n) {
	return n == 0 ? 1 : base * power_n(base, n - 1);
}


// 5. Sum digits
// while roop
long sum_digits_loop(int n){
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

// recursion
long sum_digits(int n) {
	return n < 10 ? n : n % 10 + sum_digits(n / 10);
}

