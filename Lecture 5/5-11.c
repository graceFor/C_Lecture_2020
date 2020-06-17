// Input the year to display whether it is leap year or not.

#include <stdio.h>
int leap_year(int y) { //Function to determine whether leap year is entered by entering year
	if ((y % 4 == 0) && (y % 100 != 0))
		return 1;
	else if ((y % 4 == 0) && (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main() {
	int year;

	printf("Enter year.\n");
	scanf("%d", &year);
	if (leap_year(year))
		printf("It is a leap year.\n");
	else
		printf("It is a normal year.\n");

	return 0;
}