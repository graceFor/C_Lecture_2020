// Enter two integers and display whether the two constants are Mutually Prime or not.
#include <stdio.h>

char mutually_prime(int a, int b) { // A function that determines whether two integers are Mutually Prime or not.
	int smaller;
	smaller = (a <= b) ? a : b; // a와 b 중에 작은 수 판단하기
	for (int i = 2; i <= smaller; i++) {
		if ((a%i == 0) && (b%i == 0)) // a와 b사이에 공약수가 있으면
			return 'n';
	}
	return 'y';
}

int main() {
	int a, b;
	char result;

	printf("Enter two numbers.\n");
	scanf("%d%d", &a, &b);
	result = mutually_prime(a, b);
	
	if (result == 'y')
		printf("They are mutually prime.\n");
	else if (result == 'n')
		printf("They are not mutually prime.\n");
	else
		printf("Something went wrong.\n");

	return 0;
}