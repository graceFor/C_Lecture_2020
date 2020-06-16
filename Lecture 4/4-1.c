/*Input two integers, compares the size, and display the result on the screen.*/

#include <stdio.h>
int is_larger(int, int);

int main() {
	int first, second;

	printf("Enter two integers.\n");
	scanf("%d%d", &first, &second);
	printf("Result is %d.\n", is_larger(first, second));
	return 0;
}

// Return if first variable is big or same with second variable.
int is_larger(int f, int s) {
	int result;
	result = (f > s) || (f == s);
	return result ;
}
