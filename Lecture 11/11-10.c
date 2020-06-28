// It is a program to obtain the average of (10, 40, 50, 50, 15).

#include <stdio.h>

double average_by_array(int p[], int length) { // 배열 기호를 사용해 배열 안에 있는 5개의 수의 평균을 구하는 함수
	double sum = 0;
	for (int i = 0; i < length; i++) {
		sum += p[i];
	}
	return sum / length;
}
double average_by_pointer(int p[], int length) { // 포인터 산술 연산을 사용해 배열 안에 있는 5개의 수의 평균을 구하는 함수
	double sum = 0;
	for (int i = 0; i < length; i++) {
		sum += *(p + i);
	}
	return sum / length;
}

int main() {
	int arr[5] = { 10,40,50,20,15 };
	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	return 0;
}