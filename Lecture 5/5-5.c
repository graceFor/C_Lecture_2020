//Intput the coordinate values ​​x and y are, and print the quadrant to which the point belongs.
#include <stdio.h>

int main() {
	int x, y;
	int result;

	printf("Enter the x, y coorfinates of the point.\n");
	scanf("%d%d", &x, &y);

	if (x > 0 && y > 0)
		result = 1; // When x > 0, y > 0, it is the 1st quadrant.
	else if (x < 0 && y > 0)
		result = 2; // When x < 0, y > 0, it is the 2nd quadrant.
	else if (x < 0 && y < 0)
		result = 3; // When x < 0, y < 0, it is the 3rd quadrant.
	else if (x > 0 && y < 0)
		result = 4; // When x > 0, y < 0, it is the 4th quadrant.

	printf("It's in the %dth quadrant", result);
	return 0;

}