// If "e" is checked in the received sentence, "Yes" is displayed. If not, "No" is outputted.
#include <stdio.h>

int main() {
	int i, j = 0;
	char A[100], ch;

	for (i = 0; (ch = getchar()) != '\n'; i++) { // �Է¹��� ���ڵ��� A �迭�� ���� �ִ´�.
		A[i] = ch;
	}
	A[i] = 'e'; // �迭�� �������� 'e'�� �ִ´�.

	while (A[j] != 'e') { // ù��° 'e'�� ���� ������ j�� ������Ų��.
		j++;
	}
	if (i == j) // ������ 'e'�� �Է¹��� ���忡 �������� �ʴ´�. 
		printf("No.\n");
	else // i�� j�� ���� �ٸ��� 'e'�� �Է¹��� ���忡 �����Ѵ�. 
		printf("Yes.\n");

	return 0;
}