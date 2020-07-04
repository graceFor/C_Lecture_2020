// 입력 문장 중에서 한글이 몇 문자인지를 출력하는 프로그램이다.

#include <stdio.h>
#include <string.h>

int k_letters(const char* string) { // 문장 안에 한글이 몇 글자있는지를 세는 함수

	int length = 0;


	for (int i = 0; i<= (int)strlen(string);) { 
		if (string[i] >= 0 && string[i] <= 127) { // 영어면 인덱스 1칸 이동
			i++;
		}
		else { // 한글이면 인덱스 2칸 이동
			length ++;
			i += 2;
		}
	}
	return length;
}

int main() {
	char string[100];

	while (1) {
		printf("Enter a sentence with Korean and English letters.\n");
		gets(string);
		printf("한글은 %d번 나옵니다.\n", k_letters(string));
	}
	return 0;
}