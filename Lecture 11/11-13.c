// This is a program that receives positive integers and outputs the smallest value and the largest value.

#include <stdio.h>
#include <stdlib.h>
void min_max(int* arr, int* min, int* max, int length) { // arr 배열 안에 있는 숫자들 중 min, max 값을 구하는 함수
	*min = arr[0]; *max = arr[0];

	for (int i = 0; i < length; i++) {
		*min = arr[i] > * min ? *min : arr[i]; // min 값 구하기
		*max = arr[i] < * max ? *max : arr[i]; // max 값 구하기
	}
}

int main() {
	int min, max, length = 0, num;
	int* p = (int*)malloc(1 * sizeof(int)); // 포인터 p를 동적배열로 만들었다.
	
	if (p == NULL) {
		printf("No more memory available.\n");
		exit(1);
	}
	printf("Enter a sequence of positive integers.\n");

	while (1) { // 양의 정수들을 입력받는다.
		scanf("%d", &num);
		if (num < 0) // 양의 정수만 입력받는다.
			break;
		p[length++] = num;
		p = (int*)realloc(p, (length + 1) * sizeof(int)); // 양의 정수를 입력받을 때마다 배열 크기를 늘린다.
		if (p == NULL)
			exit(1);
	}
	min_max(p, &min, &max, length);
	printf("Minimum is %d, Maximum is %d.\n", min, max);

	free(p); // p 메모리 해제
	p = NULL;
	return 0;
}
