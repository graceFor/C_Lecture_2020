// Positive integers a and b are input, and b squared of a is output.
#include <stdio.h>

int power(int a, int b) { // A function that returns the value of b squared using a recursive call.
	if (b == 0)
		return 1;
	else {
		return a * power(a, b - 1);
	}
}

int main() {
	int a, b;
	
	printf("Enter base and multiplier.\n");
	scanf("%d%d", &a, &b);
	if (a > 0 && b > 0) // Only positive integers are input.
		printf("%d to the power of %d is %d.\n", a, b, power(a, b)); 
	else 
		printf("You have entered an invalid value.\n");
	return 0;
}
