// The number of arguments 2 or 3 is input, and the average is obtained by the number of arguments.
#include <stdio.h>
#include <stdarg.h>

double average(int count, ...) { // A variable length function that can average two integers or three integers.
	int sum = 0;

	va_list(p);
	va_start(p, count);
	for (int i = 0; i < count; i++) { 
		sum += va_arg(p, int);
	}
	va_end(p);
	return (double)sum / count;
}

int main() {
	int count, first, second, third;

	printf("Enter number of arguments. It must be 2 or 3.\n"); 
	scanf("%d", &count); // Enter the number of arguments 
	if (count == 2) { // Enter the number of arguments and calculate the average of two integers.
		printf("Enter two integers.\n");
		scanf("%d%d", &first, &second);
		printf("Average value is %lf.\n", average(count, first, second));
	}
	else if (count == 3) { // Enter the number of arguments and calculate the average of three integers.
		printf("Enter three integers.\n");
		scanf("%d%d%d", &first, &second, &third);
		printf("Average value is %lf.\n", average(count, first, second, third));
	}
	else
		printf("Average is not available."); // The number of factors other than 2 or 3 can not be averaged.
	return 0;
}