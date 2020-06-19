// It is a program that receives a character and judges whether it is the character or not.
#include <stdio.h>

int main() {
	int ch = 0; // Declare a 4-byte integer type variable and initialize the variable value.
	printf("Enter a character.\n");
	scanf("%c", &ch); 
	if (ch == 'y')
		printf("yes.\n");
	else
		printf("no.\n");
	return 0;
}