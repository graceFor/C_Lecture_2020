// Inputs a binary number, converts it to a decimal number, and outputs it to the screen.
#include <stdio.h>
#include <math.h>

int bin_to_dec(long long n) {
	int sum = 0;
	double d;
	for (int i = 0; n != 0; i++) {
		d = (n % 10) * pow(2, i); // Multiplies the power of 2 by the number of digits.
		sum+= (int)d; 
		n /= 10;
	}
	return sum;
}

int main() {
	long long binary; 

	printf("Enter a binary number.\n");
	scanf("%lld", &binary); // It is assumed that binary numbers starting with 0 are not input.
	printf("The decimal value of binary %lld is %d.\n", binary, bin_to_dec(binary));
	
	return 0;
}
