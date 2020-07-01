// merging sort program

#include <stdio.h>
#include <stdlib.h>

void swap(int* p, int* q) { // 정렬이 되지 않은 두 숫자의 위치를 바꿔주는 함수.
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void insertion_sort(int* arr, int length) { // 삽입 정렬을 해주는 함수
	int i, j, last;
	last = length - 1; // arr 배열의 마지막 요소의 위치.
	for (i = 1; i <= last; i++) { // 마지막 요소까지 돌면서
		for (j = i; j > 0; j--) {
			if (*(arr + j - 1) > * (arr + j)) { // 왼쪽이 오른쪽 보다 크면
				swap(arr + j - 1, arr + j); // swap 함수를 불러 순서를 바꿔준다.
			}
		}
	}
}

int* merge_array(int* a, int* b, int* m, int length_a, int length_b) { // 두 배열을 한 배열로 합병정렬해주는 함수
	int i = 0, j = 0, t = 0;

	while (i < length_a && j < length_b){

		if (*(a + i) >= *(b + j)) { // a와 b배열의 i 인덱스가 가르키는 값 비교 중 a 배열의 값이 크면
			*(m + t) = *(b + j);// b 배열의 값을 m 배열에 옮긴다.
			t++; // 그리고 m 배열 인덱스 이동
			j++; // b 배열 인덱스 이동
		}
		else if (*(a + i) < *(b + j)) { // a와 b배열의 i 인덱스가 가르키는 값 비교 중 b 배열의 값이 크면
			*(m + t) = *(a + i);// a 배열의 값을 m 배열에 옮긴다.
			t++; // 그리고 m 배열 인덱스 이동
			i++; // a 배열 인덱스 이동
		}
	}

	while (i < length_a) { // a 배열에 남아있는 값들 m배열에 넣기
		*(m + t) = *(a + i);
		t++;
		i++;
	}
	while (j < length_b) { // b 배열에 남아있는 값들 m배열에 넣기
		*(m + t) = *(b + j);
		t++;
		j++;
	}
	return m;
}

int main() {
	int max_a, max_b;

	// a 배열에 값 넣고 정렬하기
	printf("Enter number of elements in array a.\n");
	scanf("%d", &max_a);
	int* a = (int*)malloc(max_a * sizeof(int)); // 포인터 a를 동적배열로 만들었다.
	if (a == NULL) {
		printf("No more memory available.\n");
		exit(1);
	}

	printf("Enter data to be inserted in array a. It must be in sorted order.\n");
	for (int i = 0; i < max_a; i++) { // a포인터가 가르키는 인덱스 안에 값 넣기
		scanf("%d", a + i);
	}
	insertion_sort(a, max_a); // 만약 정렬된 데이터를 넣지 않았을 경우, a 배열 정렬하기

	// b 배열에 값 넣고 정렬하기
	printf("Enter number of elements in array b.\n");
	scanf("%d", &max_b);
	int* b = (int*)malloc(max_b * sizeof(int)); // 포인터 b를 동적배열로 만들었다.
	if (b == NULL) {
		printf("No more memory available.\n");
		exit(1);
	}

	printf("Enter data to be inserted in array b. It must be in sorted order.\n");
	for (int i = 0; i < max_b; i++) { // b포인터가 가르키는 인덱스 안에 값 넣기
		scanf("%d", b + i);
	}
	insertion_sort(b, max_b); // 만약 정렬된 데이터를 넣지 않았을 경우, b 배열 정렬하기

	int* m = (int*)calloc((max_a + max_b), sizeof(int)); // a배열, b배열 힙병한 m배열
	if (m == NULL) {
		printf("No more memory available.\n");
		exit(1);
	}

	m = merge_array(a, b, m, max_a, max_b);

	printf("Result of merging is,\n");
	for (int i = 0; i < max_a+max_b; i++) {
		printf("%d ", *(m + i));
	}

	// 메모리 반환
	free(m);
	m = NULL;
	free(b);
	b = NULL;
	free(a);
	a = NULL;

	return 0;
}