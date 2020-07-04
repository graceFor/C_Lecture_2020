// 문장 내부에 특정 문자열을 다른 문자열로 대체하는 프로그램이다.
#include <stdio.h>
#include <string.h>
#define MAX 100

void change_str(char* str, const char* to, const char* from) {
	char* temp;
	int length = strlen(from);
	while ((temp = strstr(str, from)) != NULL) { // str 배열 안에 from 문자열이 있는 동안에는 계속 돌아서
		for (int i = 0; i < length; i++) {
			temp[i] = to[i]; // to 문자열로 바꿔라
		}
	}
}

int main() {
	char str[MAX], from[MAX], to[MAX];

	printf("Enter a string.\n");
	gets(str);
	printf("from string.\n");
	gets(from);
	printf("to string.\n");
	gets(to);

	change_str(str, to, from);
	printf("%s \n", str);

	return 0;
}