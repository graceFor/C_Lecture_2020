// It is a program to input various natural numbers, sort by insertion, and sort in descending order.

#define MAX 100
#include <stdio.h>

void print_array(const int arr[], int length);
void swap(int*, int*);
void insertion_sort(int arr[], int length);

int main() {
	int i = 0, temp, data[MAX];
	printf("Enter input numbers.\n");
	while (1) {
		scanf("%d", &temp);
		if (temp < 0)
			break;
		data[i++] = temp; // 입력받은 수들을 data 배열에 넣는다.
	}

	insertion_sort(data, i);
	printf("After sorting: "); 
	print_array(data, i);
	printf("\n");
	return 0;
}

void print_array(const int arr[], int length) { // 정렬된 데이터들을 프린트 해주는 함수.
	int i;
	for (i = 0; i < length; i++)
		printf("%d ", arr[i]); // 정렬된 데이터들을 프린트해준다.
}

void swap(int* p, int* q) { // 정렬이 되지 않은 두 숫자의 위치를 바꿔주는 함수.
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void insertion_sort(int arr[], int length) { // 삽입 정렬을 해주는 함수
	int i, j, last;
	last = length - 1; // arr 배열의 마지막 요소의 위치.
	for (i = 1; i <= last; i++) { // 마지막 요소까지 돌면서
		for (j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) { // 왼쪽이 오른쪽 보다 크면
				swap(&arr[j - 1], &arr[j]); // swap 함수를 불러 순서를 바꿔준다.
			}
		}
	}
}