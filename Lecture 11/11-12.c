// This is a program that takes a character and prints it backwards.꾸로 출력하는 프로그램이다.

#include <stdio.h>

void print_array(char* arr, int length) { // 입력한 문자열을 거꾸로 출력해주는 함수
	int i;

	for (i = length - 1; i >= 0; i--) { // arr 포인터 인덱스를 감소시키면서 포인터가 가르키는 것을 출력한다.
		printf("%c", *(arr + i));
	}
}

int main() {
	char ch = 0, string[100];
	int length;

	printf("Enter the sentence.\n");
	scanf("%[^\n]s", string); // 문자열로 입력을 받음

	for (length = 0; (ch = string[length]) != '\0'; length++); // string 배열의 길이를 구한다.
	print_array(string, length);
	return 0;
}