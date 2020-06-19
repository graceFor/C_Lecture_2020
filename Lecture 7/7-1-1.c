// Find the sum from 1 to n and print the maximum value, provided that the sum does not exceed the input constant. 
#include <stdio.h>

int main() {
	int i, max, sum = 0;
	printf("Enter the maximum number.\n");
	scanf("%d", &max);
	for (i = 1; sum <= max; i++)
		sum += i;
	i--; // Turning to i value that meets the condition.
	printf("The sum from 1 to %d is %d.\n", i-1, sum-i); // Turning to the sum,i values that meets the condition.


	return 0;
}