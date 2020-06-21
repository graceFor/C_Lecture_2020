// Inputs a natural number less than 10, and outputs 10 consecutive numbers starting from the natural number input on the screen.
#include <stdio.h>

void recurse(int n) { // Function to output the input natural number up to 10 in order.

	for (int i = n; i <= 10; i++) { // Outputs from n to 10 in order.
		printf("%d.\n", i);
	}
}

int main() {
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	recurse(num);
	return 0;
}