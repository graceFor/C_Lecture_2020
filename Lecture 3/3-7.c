/*The method of inputting the change and receiving the number of the smallest number of coins is displayed on the screen.*/

#include <stdio.h>
int main() {
	int change, won_500, won_100, won_50, won_10;

	printf("Enter the amount of change.\n");
	scanf("%d", &change);
	won_500 = change / 500; // Give the maximum number of coins you can at 500 won.
	won_100 = (change % 500) / 100; // Give the maximum number of coins you can at 100 won for remain.
	won_50 = ((change % 500) % 100) / 50; // Give the maximum number of coins you can at 50 won for remain.
	won_10 = (((change % 500) % 100) % 50) / 10; // Give the maximum number of coins you can at 10 won for remain.
	printf("500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개.\n", won_500, won_100, won_50, won_10);
	return 0;
}