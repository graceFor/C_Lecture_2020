// This is a program that accepts two sentences and outputs the first and second sentences in reverse order./ 두 문장을 입력받아서 첫번째 문장과 두번째 문장의 순서를 바꿔서 출력하는 프로그램이다.
#include <stdio.h>
#include <stdlib.h>

void swap(char** a, char** b) { // 첫번째 문자열과 두번째 문자열의 순서를 바꾸는 함수
	char* temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int i;
	char ch, *temp;
	char** p = (char**)malloc(2 * sizeof(char*)); // 행

	p[1] = p[0] = NULL;

	printf("Enter first string.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) {
		// realloc만 써서 필요 공간 확보
		p[0] = (char*)realloc(p[0], (i + 2) * sizeof(char)); // 열

		// NULL값 테스트
		if (!p[0])
			exit(-1);

		p[0][i] = ch;
		p[0][i + 1] = '\0';
	}

	printf("Enter second string.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) {
		// realloc만 써서 필요 공간 확보
		p[1] = (char*)realloc(p[1], (i + 2) * sizeof(char));

		// NULL값 테스트
		if (!p[1])
			exit(-1);

		p[1][i] = ch;
		p[1][i + 1] = '\0';
	}

	swap(p, p + 1); 

	printf("First string became %s, second string became %s.\n", p[0], p[1]);
	free(p[0]);
	p[0] = NULL;
	free(p[1]);
	p[1] = NULL;
	free(p);
	p = NULL;

	return 0;
}