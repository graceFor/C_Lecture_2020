// Input n, and sequentially outputs the numbers from 1 to n.
#include <stdio.h>

void print_up(int n) { // A function that sequentially prints numbers from 1 to n by a recursive call.
	if (n == 0)
		return;
	else {
		print_up(n - 1); // Head recursion
		printf("%d ", n);// It is a head recursive call, and the number is output sequentially.
	}
}

int main() {
	int num;
	
	printf("Enter the last integer.\n");
	scanf("%d", &num);
	print_up(num);
	return 0;
}