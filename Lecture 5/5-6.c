// A program that takes the scores of three judges and removes the lowest and highest scores

#include <stdio.h>

int main() {
	int a, b, c;

	printf("Enter three integer.\n");
	scanf("%d%d%d", &a, &b, &c);

	// Set the smallest number to 0
	if (a < b && a < c) {	// If a is the smallest
		a = 0;
	}
	else if (b < a && b < c) {	// If b is the smallest
		b = 0;
	}
	else if (c < a && c < b) {	// If c is the smallest
		c = 0;
	}

	// Set the largest number to 0
	if (a > b && a > c) {  // If a is the largest
		a = 0;
	}
	else if (b > a && b > c) {  // If b is the largest
		b = 0;
	}
	else if (c > a && c > b) {  // If c is the largest
		c = 0;
	}

	printf("The player gets %d.\n", a + b + c);

	return 0;
}