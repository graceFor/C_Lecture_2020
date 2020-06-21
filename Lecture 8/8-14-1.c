//  Inputs a natural number less than 10, and outputs 10 consecutive numbers starting from the natural number input on the screen.
#include <stdio.h>

void recurse(int n) { // Function to output the input natural number through ten recursive functions.
	if (n > 10)
		return;
	printf("%d.\n", n); 
	recurse(n + 1);
}

int main() {
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	recurse(num);
	return 0;
}