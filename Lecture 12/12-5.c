// strchr 함수와 동일한 역할을 하는 함수를 만들어 구현하는 프로그램이다.

#include <stdio.h>
#include <string.h>

const char* my_strchr(const char* str, int c) { // 배열 안에 찾는 문자가 있는지 확인하는 함수
	int i;
	for (i = 0; str[i] != '\0'; i++) { // str배열을 돌면서
		if (str[i] == c) // 배열 안에 c가 있으면
			return &str[i + 1]; // c 다음 글자부터 return
	}
	return NULL; // 찾는 문자 c가 없으면 NULL
}

int main() {
	char str[50], c;

	while (1) {
		printf("Enter source string.\n");
		gets(str);
		if (strcmp(str, "quit") == 0) // str배열에 quit를 입력하면 루프를 빠져나와라
			break;
		printf("Enter character to be searched.\n");
		scanf("%c", &c);
		if (my_strchr(str, c) == NULL) {
			printf("No such character.\n");
		}
		else
			printf("%s\n", my_strchr(str, c));
		while (getchar() != '\n');
	}
	return 0;
}