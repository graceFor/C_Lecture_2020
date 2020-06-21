// Outputs the Fibonacci sequence value of the input num value, measures the time taken to execute this function, and outputs it.
#include <stdio.h>
#include <time.h>


long long fib(long long n) {// A function that outputs Fibonacci sequences.
	if (n < 3)
		return 1;
	else
		return (fib(n - 1) + fib(n - 2));
}

int main() {
	long long num;
	int start, result, end;

	printf("Enter a number.\n");
	scanf("%lld", &num);

	start = (int)clock();
	result = fib(num); // A function that returns the number of clock signals that occurred when the 'fib' function was executed.
	end = (int)clock();

	printf("%lldth fibonacci number is %lld.\n", num, fib(num));
	printf("Time elapsed for fibonacci is %0.3f seconds.\n", (float)(end - start) / CLOCKS_PER_SEC); // The time taken to execute the fib function.
	return 0;
}
