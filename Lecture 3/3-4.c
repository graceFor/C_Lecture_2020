/*Input the seconds, and display them on the screen in units of hours, minutes, and seconds.*/

#include <stdio.h>
int main() {
	int hour, min, sec;

	printf("Enter seconds.\n");
	scanf("%d", &sec); 
	
	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60;
	printf("It is %d hours, %d minutes, %d seconds.\n", hour, min, sec);
	return 0;
}