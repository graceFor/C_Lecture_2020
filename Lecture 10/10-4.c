#include <stdio.h> 

void cyclic_swap(int* a, int* b, int* c) { 
	int temp1, temp2;
	temp1 = *a; temp2 = *b; 
	*a = *c; 
	*b = temp1; 
	*c = temp2; 
}
int main() {
	int a, b, c;
	printf("Enter three integers a, b, c.\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	cyclic_swap(&a, &b, &c);
	printf("After cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c); 
	return 0;
}