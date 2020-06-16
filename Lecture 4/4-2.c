/*The coordinates of two points are input and the distance between two points is displayed on the screen.*/

#include <stdio.h>
#include <math.h>
double distance(double, double, double, double);

int main() {
	double x1, x2, y1, y2;
	
	printf("Enter the coordinates of point p.\n");
	scanf("%lf%lf", &x1, &y1);
	printf("Enter the coordinates of point q.\n");
	scanf("%lf%lf", &x2, &y2);
	printf("Distance between the points is %lf.\n", distance(x1, x2, y1, y2));
	return 0;
}

// The function to find the distance between two points.
double distance (double x1, double x2, double y1, double y2) {
	double x, y, total;
	x = x2 - x1; // distance between x coordinates
	y = y2 - y1; // distance between y coordinates
	total = sqrt(pow(x,2.0)+pow(y,2.0)); // x^2 + y^2
	return total;
}
