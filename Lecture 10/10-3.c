// Calculate fibonacci function with Dynamic programming.
#include <stdio.h>

int fibo(int val[], int fnd[], int n) { // 피보나치 값 구하는 함수
	int temp;
	if (fnd[n] == 1) // 이미 피보나치 값이 구해져있으면
		return val[n]; // 곧바로 그 값을 리턴
	else { // 그렇지 않으면
		temp = fibo(val, fnd, n - 1) + fibo(val, fnd, n - 2); // 재귀호출로 직전 두항을 더해 temp에 대입
		val[n] = temp; // temp의 값을 val 배열에 대입
		fnd[n] = 1; // 이제 그 값이 구해졌다고 fnd 배열에 표시
		return temp; // temp 값을 리턴
	}
}

int main() {
	int i, num, value[100], found[100];

	printf("Enter a number.\n");
	scanf("%d", &num); // 입력 숫자를 num에 저장
	for (int i = 0; i < 100; i++) { found[i] = 0; } // found 배열 초기화
	value[0] = value[1] = 1; // value 배열 첫 항과 두 번째 항 1로 초기화
	found[0] = found[1] = 1; // found 배열 첫 항과 두 번째 항 1로 초기화
	printf("%dth Fibonacci number is %d.\n", num, fibo(value, found, num - 1));
	return 0;
}