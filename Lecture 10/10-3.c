// Calculate fibonacci function with Dynamic programming.
#include <stdio.h>

int fibo(int val[], int fnd[], int n) { // �Ǻ���ġ �� ���ϴ� �Լ�
	int temp;
	if (fnd[n] == 1) // �̹� �Ǻ���ġ ���� ������������
		return val[n]; // ��ٷ� �� ���� ����
	else { // �׷��� ������
		temp = fibo(val, fnd, n - 1) + fibo(val, fnd, n - 2); // ���ȣ��� ���� ������ ���� temp�� ����
		val[n] = temp; // temp�� ���� val �迭�� ����
		fnd[n] = 1; // ���� �� ���� �������ٰ� fnd �迭�� ǥ��
		return temp; // temp ���� ����
	}
}

int main() {
	int i, num, value[100], found[100];

	printf("Enter a number.\n");
	scanf("%d", &num); // �Է� ���ڸ� num�� ����
	for (int i = 0; i < 100; i++) { found[i] = 0; } // found �迭 �ʱ�ȭ
	value[0] = value[1] = 1; // value �迭 ù �װ� �� ��° �� 1�� �ʱ�ȭ
	found[0] = found[1] = 1; // found �迭 ù �װ� �� ��° �� 1�� �ʱ�ȭ
	printf("%dth Fibonacci number is %d.\n", num, fibo(value, found, num - 1));
	return 0;
}