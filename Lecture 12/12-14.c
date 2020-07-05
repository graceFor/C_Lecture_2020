// 문자열로 저장되어 있는 것들을 정수형태로 저장하는 프로그램이다.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char ch, * str, * ptr;
	int i, j;
	int* arr;

	printf("Enter one or more integers.\n");
	str = NULL; // 동적 문자열을 가르키는 str 포인터를 NULL로 초기화
	for (i = 0; (ch = getchar()) != '\n'; i++) {
		str = (char*)realloc(str, (i + 1) * sizeof(char)); // str에 동적메모리 할당
		str[i] = ch; // str 배열에 문자들 저장
	}
	str[i] = ' '; // '\n' 자리에 ' '를 덧씌움 문자열 끝에 '\0'을 넣기 위해서
	str[i + 1] = '\n'; // 그 다음 자리에 '\n' 넣기

	// str이 가르키는 문자열에서 ' '를 모두 '\0'으로 치환하기 위해 strtok 함수를 호출.
	ptr = strtok(str, " ");
	while (ptr != NULL) {
		ptr = strtok(NULL, " ");// " "위치에 '\0'을 삽입한다.
	}

	ptr = str; // ptr을 str로 초기화
	arr = NULL; // 정수 배열 arr을 NULL로 초기화
	for (i = 0; *ptr != '\n'; i++) {
		arr = (int*)realloc(arr, (i + 1) * sizeof(int)); // arr에 동적메모리 할당
		arr[i] = atoi(ptr); // ptr 배열에 저장되어 있는 문자들을 정수로 변환해서 arr 배열에 저장
		while (*ptr != '\0') {
			ptr++; // ptr이 str배열의 다음 문자열을 가르키게 해야함.
		}
		ptr++;
	}
	for (j = 0; j < i; j++) { // arr 배열을 출력해라
		printf("%d ", arr[j]);
	}
	printf("\n");
	
	return 0;
}