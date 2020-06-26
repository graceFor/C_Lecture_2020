// This is a program that puts the input long integer into the array by the number of digits and uses the distribution rule to output the rest.

#include <stdio.h>
#include <stdlib.h>

int modulo(int a[], const int m, const int size) { // 입력받은 정수의 나머지를 구하는 함수.
	int modulo = 0;
	for (int i = 0; i < size; i++) {
		modulo = (modulo * 10 + a[i]) % m; // 앞의 자리의 나머지를 10의 자리로 넣고 현재 인덱스 자리를 일의 자리로 넣어 나머지를 구한다.
	}
	return modulo;
}

int main() {
	int i, mod, arr[1000];
	char ch;
	printf("Enter a big positive integer.\n");
	i = 0;
	while ((ch = getchar()) != '\n') {
		arr[i] = atoi(&ch);  // alphabet을 integer로 변환해준다.
		i++;
	}
	printf("Enter a modulus number.\n");
	scanf("%d", &mod);
	printf("The result of modulo operation is %d.\n", modulo(arr, mod, i));
	return 0;
}


