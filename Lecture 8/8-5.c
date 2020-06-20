// The natural number n is input and the sum of 1 to n is output.
#include <stdio.h>

int sum(int n) { // Function to obtain the sum of 1 through n by recursive call.
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}

int main() {
	int num;
	
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	printf("The sum is %d.\n", sum(num));

	return 0;
}