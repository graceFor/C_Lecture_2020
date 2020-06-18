// Read the number as an individual character, convert it to an integer, and print it.
#include <stdio.h>
int main() {
	char ch; 

	int sum = 0;
	int value;

	printf("Enter a natural number.\n");
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		else if (ch >= '0' && ch <= '9') { 
			value = ch - '0';
			sum = sum * 10 + value;
		}
	}
	printf("You entered %d in decimal.\n", sum);
	return 0;
}