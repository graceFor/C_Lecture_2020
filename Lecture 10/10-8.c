// 다항식의 차수와 계수를 입력받아 호르너 규칙을 적용해 결과를 출력하는 프로그램이다.

#include <stdio.h>

double horner(const int n, const double p[], const double x) { // 호르노 규칙을 사용해 다항식을 계산하는 함수.
	double result = p[0];
	for (int i = 0; i < n; i++) {
		result = result * x + p[i + 1]; // 현재 차수를 x와 곱하고 다음 차수의 계수를 더한다.
	}
	return result;
}

int main() {
	int poly; 
	double coef[3], x;

	printf("Enter order of polynominal.\n");
	scanf("%d", &poly); // 다항식의 차수를 입력. 다항식의 차수는 1차 이상이다.
	printf("Enter 3 coefficients.\n");
	for (int i = 0; i < 3; i++) {
		scanf("%lf", &coef[i]); // 계수를 입력받아 p배열에 넣어라.
	}
	printf("Enter the value of x.\n"); // 변수 x의 값
	scanf("%lf", &x);
	printf("The value of the polynominal is %lf.\n", horner(poly, coef, x));
	return 0;
}