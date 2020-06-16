/*Input two natural numbers, divides them, and output the quotient and remainder to the screen.*/

#include <stdio.h>
int main() {
	int divid, divis, quotient, remainder;

	printf("Enter dividend.\n");
	scanf("%d", &divid);
	printf("Enter divisior.\n");
	scanf("%d", &divis);
	quotient = divid / divis; // Calculate quotient 
	remainder = divid % divis; // Calculate remainder
	printf("Quotient is %d. Remainder is %d.\n", quotient, remainder);
	return 0;
}