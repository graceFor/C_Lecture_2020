// It is a program that receives a character and judges whether it is the character or not.
#include <stdio.h>

int main() {
	int ch; // 4-byte integer type variable declaration.
	printf("Enter a character.\n");
	ch = getchar(); // 'getchar' function returns a 4-byte integer value.
	if (ch == 'y')
		printf("yes.\n");
	else
		printf("no.\n");
	return 0;
}