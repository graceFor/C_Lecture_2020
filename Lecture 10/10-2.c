// A program that takes a series of integers until -1 is entered and calculates how many integers it finds.
#include <stdio.h>
int count(const int a[], const int comp, int last) { // �迭 a�� ������ ��� �ε����� last�� �� �迭 ���ο� comp�� ���� ���ڰ� �� �� ��Ÿ������ ���ϴ� �Լ�
	if (last == -1) // base case
		return 0;
	else if (a[last] == comp) // a �迭 ������ ���� comp�� ���� ���� ������
		return (count(a, comp, last - 1)) + 1; // 1�� ���ؼ� ���ȣ���� ��ȯ�Ѵ�.
	else // ���� ���� ������
		return count(a, comp, last - 1); // �ٷ� ���ȣ���� ��ȯ�Ѵ�.
}

int main() {
	int i, last, comp, num[100];

	printf("Enter input number.\n");
	for (last = 0; last < 100; last++) { // �Է¹��� ���ڵ��� num �迭�� ���� �ִ´�.
		scanf("%d", &num[last]);
		if (num[last] == -1) // -1�� �Է¹����� for���� ���Ͷ�
			break;
	}
	printf("Enter a number to search.\n");
	scanf("%d", &comp);
	printf("%d appear %d times.\n", comp, count(num, comp, last - 1)); // num �迭 �������� -1�� ��������Ƿ� �ϳ� �տ��� ȣ��
	return 0;
}