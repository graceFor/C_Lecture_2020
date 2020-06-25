//a and b are input, and the sum is displayed on the screen.
#include <stdio.h>

void add(const int a, const int b, int* p) { // a + b 값을 p 포인터가 가르키는 변수에 넣어주는 함수
	*p = a + b; // 메인 함수에 있는 변수 sum 안에 a+b 값을 넣어라
	return;
}
int main() {
	int a, b, sum, * ptr;
	ptr = &sum;

	printf("Enter two numbers.\n");
	scanf("%d%d", &a, &b);
	add(a, b, ptr);
	printf("The sum is %d.\n", sum);
	return 0;
}