// It is a program to judge whether or not two sentences inputted are anagram.

#include <stdio.h>

int string_input(char* str) {
	char ch;
	int index;
	for (index = 0; (ch = getchar()) != '\n'; index++) {
		str[index] = ch;
	}
	return index;
}

int main() {
	int a_length, b_length, k, l;
	char ch, A[100], B[100];

	// First string ���ڵ��� A �迭�� ���� �ִ´�.
	printf("Enter the first string.\n");
	a_length = string_input(A);

	// Second string ���ڵ��� B �迭�� ���� �ִ´�.
	printf("Enter the second string.\n");
	b_length = string_input(B);

	// A �迭�� �� ���ڸ��� B �迭�� �ִ��� Ȯ���Ѵ�.
	for (k = 0; k < a_length; k++) {
		ch = A[k];
		if (ch == ' ')
			continue;
		// A�迭�� �ִ� ���ڰ� B�迭���� �����ϸ� '*'�� �ٲٰ� �������´�.
		for (l = 0; l < b_length; l++) {
			if (ch == B[l]) {
				B[l] = '*';
				break;
			}

			// ������ �� ���Ҵµ� �� ���ڰ� ������ ���� ��� �ֳʱ׷��� �ƴϴ�.
			if (l == b_length - 1 && ch != B[l]) {
				printf("No, they are not anagrams.\n");
				return -1;
			}
		}
	}

	// B �迭�� ���鼭
	for (k = 0; k < b_length; k++) {
		// B �迭�� �����̽��� *ǥ�� �ƴ� ���ڰ� ������ �ֳʱ׷��� �ƴϴ�.
		if (!(B[k] == ' ' || B[k] == '*')) {
			printf("No, they are not anagrams.\n");
			break;
		}
	}
	if (k == b_length) // ���� �ִ� for���� break�� �ɸ��� �ʰ� ������ �� �������Ƿ� �ֳʱ׷��̴�.
		printf("Yes, they are anagrams.\n");
	return 0;
}