// A program that stores an input string in an array and lists all substrings of that string.
#include <stdio.h>

int main() {
	int a;
	char s[100], ch; // 문자는 최대 100까지 받을 수 있다.

	printf("Enter a string.\n");
	for (a = 0; (ch = getchar()) != '\n'; a++) { // 입력받은 문자들을 s 배열에 집어 넣는다.
		s[a] = ch;
	}

	for (int i = 0; i < a; i++) { // 첫 시작 문자에 대한 for문
		for (int j = i + 1; j < a + 1; j++) { // 줄별로 몇번째 문자까지 찍을 것인가
			for (int k = i; k < j; k++) { // 매 줄마다 찍기
				printf("%c", s[k]);
			}
			printf("\n");
		}
	}
	return 0;
}