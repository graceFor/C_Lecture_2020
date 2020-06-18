// The number of digits of the input natural number is reversely displayed on the screen.
#include <stdio.h>

void reverse_it(int num) { // A function that inverts the digits of a natural number.
	while (num != 0) {
		printf("%d", num % 10); 
		num /= 10;
	}
	printf("\n");
}

int main() {
	int num;

	printf("Enter a natural number.\n");
	scanf("%d", &num);

	while(num > 0){ // Execute it repeatedly when the natural number is 0 or not negative.
		reverse_it(num);
		printf("Enter a natural number.\n");
		scanf("%d", &num);
	}
	return 0;
}