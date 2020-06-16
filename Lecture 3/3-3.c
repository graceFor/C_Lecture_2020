/*Input three integers and output the average to the screen.*/

#include <stdio.h>
int main() {
	int num1, num2, num3;
	double avg;

	printf("Enter three integers.\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	avg = (double)(num1 + num2 + num3) / 3; // Calculate average with force Type Conversion.
	printf("The average of %d, %d, %d is %.3lf.\n", num1, num2, num3, avg);
	return 0;
}