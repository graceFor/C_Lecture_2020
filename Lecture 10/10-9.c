// This is a program that takes 12 digits and sorts them in descending order, and checks whether they are numbers in it. It tells you how many digits are stored in it.

#include <stdio.h>
#define MAX 12 // 입력 값을 12개만 받는다.

void swap(int* p, int* q) { // 정렬이 되지 않은 두 숫자의 위치를 바꿔주는 함수.
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void insertion_sort(int* arr, int length) { // 삽입 정렬을 해주는 함수
	int i, j, last;
	for (i = 1; i < length; i++) { // // 마지막 요소까지 돌면서
		for (j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) { // 왼쪽이 오른쪽 보다 크면
				swap(&arr[j - 1], &arr[j]); // swap 함수를 불러 순서를 바꿔준다.

			}
		}
	}
}

int binary_search(int* arr, int search, int first, int last) { // 찾고 있는 값이 배열에 있는지 확인하는 함수.
	int middle;

	if (first > last) // 첫번째 인덱스가 마지막 인덱스보다 크거나 같으면 이 배열 안에 찾는 값이 없다. - base case
		return -1;

	middle = (first + last) / 2; // 범위 내의 가운데 인덱스 

	if (arr[middle] == search) // arr[middle] 값이 찾는 값과 같으면 내가 찾고 있는 값이다
		return middle;
	else if (arr[middle] > search) // arr[middle] 값보다 찾는 값과 작으면 
		return binary_search(arr, search, first, middle - 1); // middle - 1 을  last 인덱스로 바꿔서 재귀함수 호출
	else // arr[middle] 값보다 찾는 값이 크거나 같으면
		return binary_search(arr, search, middle + 1, last); // middle + 1 을  first 인덱스로 바꿔서 재귀함수 호출
}

int main() {
	int arr[MAX], search, result;

	printf("Enter twelve integers.\n");
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]); // 입력받은 12개의 수들을 data 배열에 넣는다.
	}

	insertion_sort(arr, MAX); // 입력받은 수들을 오름차순으로 정렬한다.

	printf("Enter data to be searched.\n"); // 찾고 싶은 수를 입력받는다.
	scanf("%d", &search);

	result = binary_search(arr, search, 0, MAX - 1);
	if (result < 0)
		printf("No such data.\n");
	else
		printf("It is in index %d.\n", result);

	return 0;
}