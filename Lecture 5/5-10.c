// Enter a three-letter word and print out how many of the characters it represents.

#include <stdio.h>

int is_digit(int ch) { // A function that uses ASCII code to determine whether a character is a number
	if (ch >= '0' && ch < '0') { // ASCII code numbers from 0 to 9 are from 48 to 57. 
		return 1; // Returns 1 if it is a numeric character.
	}
	else {
		return 0; // Otherwise, it returns 0.
	}
}

int main() {
	char a, b, c;
	int result = 0;

	printf("Enter a 3-letter word.\n");
	scanf("%c%c%c", &a, &b, &c);
	result += is_digit(a);
	result += is_digit(b);
	result += is_digit(c);

	printf("Digit appears %d times.\n", result);

	return 0;
}