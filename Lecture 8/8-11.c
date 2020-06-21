// Hanoi_Tower

#include <stdio.h>

void move(int n, char x, char y, char z) { 
	if (n == 1)
		printf("move a disk from %c to %c.\n", x, y);
	else { 
		move(n - 1, x, z, y);	
		printf("move a disk from %c to %c.\n", x, y);
		move(n - 1, z, y, x);  
	} 
}


int main() {
	int num;	

	printf("Enter the number of disks.\n");
	scanf("%d", &num);

	move(num, 'X', 'Y', 'Z');
	return 0;
}