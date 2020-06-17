//Input weight and height and the BMI evaluation result is displayed on the screen.

#include <stdio.h>

int main() {
	double weight, height, result;

	printf("Enter your weight.\n");
	scanf("%lf", &weight);
	printf("Enter your height.\n");
	scanf("%lf", &height);

	result = weight / (height * height);
	if (result < 18.5) // The BMI index is underweight.
		printf("Your BMI is %.2lf. It is underweight.\n", result);
	else if (18.5 <= result && result < 25.0) // The BMI index is normal.
		printf("Your BMI is %.2lf. It is normal.\n", result);
	else // The BMI index is overweight.
		printf("Your BMI is %.2lf. It is overweight.\n", result);

	return 0;
}