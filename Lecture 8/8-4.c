// An integer is input until a negative integer is input, and the minimum value in that state is output every time the input is received.
# include <stdio.h>

int current_min(int n) { // A function that determines the value of minimum by comparing the input integer with the previous minimum value.
	static int min = 100;
	if (n < 0) // When a negative integer is entered, it returns the minimum value in that state.
		return min;
	min = min < n ? min : n; 
	return min;
}

int main() {
	int num;
	printf("Enter a number.\n");
	scanf("%d", &num);
	while (num > 0) {
		printf("Current min is %d.\n", current_min(num));
		printf("Enter a number.\n");
		scanf("%d", &num);
	}
	return 0;
}