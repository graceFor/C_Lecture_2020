/*Celcius temperature is input and converted to Fahrenheit and displayed on the screen.*/

#include <stdio.h>
int main() {
	int celcius, fahrenheit;

	printf("Enter degrees in Celcius.\n");
	scanf("%d", &celcius);
	fahrenheit = celcius * 9 / 5 + 32; // Replace celcius degree to fahrenheit degree
	printf("%d degrees in Celcius is %d degrees in Fahrenheit.\n", celcius, fahrenheit);
	return 0;
}