//a and b are input, and the sum is displayed on the screen.
#include <stdio.h>

void add(const int a, const int b, int* p) { // a + b ���� p �����Ͱ� ����Ű�� ������ �־��ִ� �Լ�
	*p = a + b; // ���� �Լ��� �ִ� ���� sum �ȿ� a+b ���� �־��
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