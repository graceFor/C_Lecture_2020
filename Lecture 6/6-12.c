// The odd number is inputted and three kinds of images are displayed on the screen.
#include <stdio.h>

void asymmetry_star_tree(int num) { 
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void asymmetry_number_tree(int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%d", j + 1);
		}
		printf("\n");
	}
}

void symmetry_star_tree(int num) {
	for (int i = 0; i < (num + 1) / 2; i++) {
		for (int k = 0; k < ((num + 1) / 2) - i - 1; k++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		for (int l = 0; l < i; l++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int num;
	
	printf("Enter the number.\n");
	scanf("%d", &num);

	if (num % 2 == 1){ // If it is an odd number, it uses functions that output three views.
		asymmetry_star_tree(num);
		asymmetry_number_tree(num);
		symmetry_star_tree(num);
	}
	return 0;
}