// A program that stores an input string in an array and lists all substrings of that string.
#include <stdio.h>

int main() {
	int a;
	char s[100], ch; // ���ڴ� �ִ� 100���� ���� �� �ִ�.

	printf("Enter a string.\n");
	for (a = 0; (ch = getchar()) != '\n'; a++) { // �Է¹��� ���ڵ��� s �迭�� ���� �ִ´�.
		s[a] = ch;
	}

	for (int i = 0; i < a; i++) { // ù ���� ���ڿ� ���� for��
		for (int j = i + 1; j < a + 1; j++) { // �ٺ��� ���° ���ڱ��� ���� ���ΰ�
			for (int k = i; k < j; k++) { // �� �ٸ��� ���
				printf("%c", s[k]);
			}
			printf("\n");
		}
	}
	return 0;
}