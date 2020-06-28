// This is a program that takes a character and prints it backwards.꾸로 출력하는 프로그램이다.

#include <stdio.h>

void print_array(char* arr, int length) { // 입력한 문자열을 거꾸로 출력해주는 함수
	
	if (length == 0)
		return;
	printf("%c", *(arr + (length - 1)));
	print_array(arr, length - 1);

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