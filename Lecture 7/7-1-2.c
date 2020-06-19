// Find the sum from 1 to n and print the maximum value, provided that the sum does not exceed the input constant. 
#include <stdio.h>

int main() {
	int i, max, sum = 0;
	printf("Enter the maximum number.\n");
	scanf("%d", &max);
	for (i = 1; ; i++) {
		sum += i;
		if (sum >= max)  // Exit for statement if the sum reaches the sum that exceeds the input integer.
			break;
	}
	sum -= i; // Turning to the sum value that meets the condition.
	i--; //Turning to i value that meets the condition.
	printf("The sum from 1 to %d is %d.\n", i, sum);

	return 0;
}