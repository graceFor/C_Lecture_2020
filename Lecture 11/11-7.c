// This is a program that takes two arrays and outputs them in reverse order.

#include <stdio.h>
void print_array(int* arr, int length) { // 배열에 안에 있는 내용을 출력하는 함수
	for (int i = 0; i < length; i++) {
		printf("%d ", *(arr + i));
	}
}
void swap_array(int* a, int* b, int length) { // 두 배열에 있는 숫자들을 swap하는 함수
	int temp;
	temp = *a;  
	
	for (int i = 0; i < length; i++) { // a가 가르키는 인덱스 값 안에 b의 인덱스 값을 넣어라
		*(a + i) = *(b + i);
	}
	for (int i = 0; i < length; i++) { // b가 가르키는 인덱스 값 안에 temp의 인덱스 값을 넣어라
		*(b + i) = temp + i;
	}
	
}
int main() {
	int length, num, arr1[5], arr2[5];


	printf("Enter the contents of first array.\n");


	for (length = 0; length < 5;) { // arr1 배열에 5개의 숫자들을 넣어라
		scanf("%d", &num);
		arr1[length++] = num;
	}

	printf("Enter the contents of second array.\n");
	for (length = 0; length < 5;) { // arr2 배열에 5개의 숫자들을 넣어라
		scanf("%d", &num);
		arr2[length++] = num;
	}
	printf("Before swapping,\n"); //swap하기 전 두 배열의 내용 출력
	printf("first: ");
	print_array(arr1, length);
	printf("\n");
	printf("second: ");
	print_array(arr2, length);
	printf("\n");

	swap_array(&arr1, &arr2, length);
	printf("After swapping,\n"); // swap 한 후 두 배열의 내용 출력
	printf("first: ");
	print_array(arr1, length);
	printf("\n");
	printf("second: ");
	print_array(arr2, length);
	printf("\n");
	return 0;

}