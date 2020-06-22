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

	// First string 문자들을 A 배열에 집어 넣는다.
	printf("Enter the first string.\n");
	a_length = string_input(A);

	// Second string 문자들을 B 배열에 집어 넣는다.
	printf("Enter the second string.\n");
	b_length = string_input(B);

	// A 배열의 각 글자마다 B 배열에 있는지 확인한다.
	for (k = 0; k < a_length; k++) {
		ch = A[k];
		if (ch == ' ')
			continue;
		// A배열에 있는 문자가 B배열에도 존재하면 '*'로 바꾸고 빠져나온다.
		for (l = 0; l < b_length; l++) {
			if (ch == B[l]) {
				B[l] = '*';
				break;
			}

			// 끝까지 다 돌았는데 그 문자가 나오지 않을 경우 애너그램이 아니다.
			if (l == b_length - 1 && ch != B[l]) {
				printf("No, they are not anagrams.\n");
				return -1;
			}
		}
	}

	// B 배열을 돌면서
	for (k = 0; k < b_length; k++) {
		// B 배열에 스페이스나 *표가 아닌 문자가 있으면 애너그램이 아니다.
		if (!(B[k] == ' ' || B[k] == '*')) {
			printf("No, they are not anagrams.\n");
			break;
		}
	}
	if (k == b_length) // 위에 있는 for문이 break에 걸리지 않고 끝까지 다 돌았으므로 애너그램이다.
		printf("Yes, they are anagrams.\n");
	return 0;
}