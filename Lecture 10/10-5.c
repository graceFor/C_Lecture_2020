// It is a program that calculates factorial by inputting natural number n.
#include <stdio.h> 

void factorial(int n, int* p) { // factorial
	if (n == 1)
		return;
	else {
		*p = *p * n; // result
		factorial(n - 1, p); // n-1
		return;
	}
}

int main() {
	int num;
	int result = 1;
	int* prt;
	prt = &result;

	printf("Enter a positive integer.\n");
	scanf("%d", &num);
	factorial(num, prt); 
	printf("Factorial of %d is %d.\n", num, result);
	return 0;
}
