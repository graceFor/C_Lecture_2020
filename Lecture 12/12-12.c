// 입력받은 단어들을 한번에 출력하는 프로그램이다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char** p = NULL;
	char word[100];
	int i, row = 0; // row는 행번호

	while (1) {
		printf("Enter a word.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) { // word배열에 quit를 입력하면 루프를 빠져나와라
			break;
		}
		p = (char**)realloc(p, (row + 1) * sizeof(char*)); // 단어가 들어올 때마다 행의 수를 증가
		if (p == NULL) {
			printf("No more memory available.\n");
			exit(1);
		}
		p[row] = (char*)malloc((strlen(word) + 1) * sizeof(char)); // p[row]가 단어 크기만큼 동적 메모리를 가리키게 함.
		if (p[row] == NULL) {
			printf("No more memory available.\n");
			exit(1);
		}
		strcpy(p[row], word); // word를 p[row]로 복사
		row++;
	}
	for (i = 0; i < row; i++) { // 계속 입력했었던 단어들 차례대로 출력
		puts(p[i]);
	}
	printf("\n");
	for (i = 0; i < row; i++) { // 동적메모리 해제
		free(p[i]);
	}
	return 0;
}