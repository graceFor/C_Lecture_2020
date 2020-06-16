/*Three real numbers are input and the standard deviation is displayed on the screen.*/

#include <stdio.h>
#include <math.h>
double average(double, double, double);
double std_deviation(double, double, double);

int main() {
	double num1, num2, num3;

	printf("Enter a three real numbers.\n");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	printf("The standard deviation is %lf.\n", std_deviation(num1, num2, num3));
	return 0;
}

// A function that takes three real numbers and calculates the average.
double average(double a, double b, double c) {
	return((a + b + c) / 3); // Average value
}

// A function that takes three real numbers and calculates the standard deviation
double std_deviation(double a, double b, double c) {
	double x, y, z, varience;
	x = pow((a - average(a, b, c)), 2.0); // (a-average)^2
	y = pow((b - average(a, b, c)), 2.0); // (b-average)^2
	z = pow((c - average(a, b, c)), 2.0); // (c-average)^2
	varience = (x + y + z) / 3; 
	return(sqrt(varience)); // Standard deviation value
}
