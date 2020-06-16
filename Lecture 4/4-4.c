/*Enter lower case letters, convert them to upper case letters, and print them on the screen.*/

#include <stdio.h>
char to_upper_case(char);

int main() {
	char small;
	printf("알파벳 소문자를 입력하세요.\n");
	scanf("%c", &small);
	printf("소문자 %c의 대문자는 %c입니다.\n", small, to_upper_case(small));
	return 0;
}

// Functions to replace lowercase characters with uppercase characters.
char to_upper_case(char ch) {
	return (ch - 32); // There are 32 differences between upper and lower case letters
}