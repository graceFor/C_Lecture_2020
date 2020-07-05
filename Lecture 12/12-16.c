// 한글 문장을 입력받아 그것이 회문인지를 판단하는 프로그램이다.

#define true 1
#define false 0
#include <stdio.h>
#include <string.h>

int k_letters(const char* string) { // 문장 안에 한글이 회문인지를 판단하는 함수
	int first = 0, last = (int)strlen(string); // 문장 전체 길이 구하기
	int i = first;
	last--;
	int j = last;

	// 아스키코드 32에서 47 사이의 문자는 연이어 두 자리 이상 들어오지 않는다고 가정.
	for (int i = 0; i < last / 2;) {
		if (string[i] >= 32 && string[i] <= 47) 
			i++;
		if (string[j] >= 32 && string[j] <= 47) 
			j--;

		if (string[i] == string[j - 1] && string[i + 1] == string[j]) { // 한글은 2바이트를 쓰니까 인덱스 2칸씩 움직인다.
			i += 2;
			j -= 2;
		}
		else // 회문이 아닌 경우
			return false; 
	}
	return true; // 회문이라는 뜻이므로 true 리턴
}

int main() {
	char string[100];

	while (1) {
		printf("한글 문장을 입력하세요.\n");
		gets(string);
		if (k_letters(string) == true) {
			printf("네. 회문입니다.\n");
		}
		else
			printf("회문이 아닙니다.\n");
	}
	return 0;
}