// It is a program to output the input sentence backwards.
#include <stdio.h>

void reverse(char s[], int last) { // 입력문장을 거꾸로 출력하는 함수
	if (last == -1) // base case
		return;
	else {
		printf("%c", s[last]); // 마지막 문자를 찍고
		reverse(s, last - 1); // 그전의 문자를 찍기 위해 인덱스 값을 변경하면서 재귀호출
		return;
	}
}

int main() {
	int last;
	char ch, s[100];

	printf("Enter a sentence.\n");
	for (last = 0; (ch = getchar()) != '\n'; last++) { // 입력받은 문자들을 s배열에 집어넣는다
		s[last] = ch;
	}
	reverse(s, last - 1); // last-1은 마지막 문자를 가르키는 인덱스 
	return 0;
}