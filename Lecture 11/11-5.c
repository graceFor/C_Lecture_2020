// It is a program that receives positive integers and outputs them backwards.

#include <stdio.h>
void reverse_array(int* a, int* b, int length) { // a배열에 저장되어 있는 숫자들을 b 배열에 거꾸로 저장시키는 함수.
	for (int i = 0; i <= length; i++) {
		b[i] = a[length - i]; // a 배열에 저장되어 있는 정수들을 거꾸로 b 배열에 저장한다.
	}
}
int main() {
	int i = 0, num, length, orginal[100], reversed[100];
	printf("Enter a sequence of positive integers.\n");
	while (1) {
		scanf("%d", &num);
		if (num <= 0)
			break;
		orginal[i++] = num; // original 배열에 입력받은 숫자들을 넣는다.
	}
	length = i;

	reverse_array(orginal, reversed, length - 1);
	for (int j = 0; j < length; j++) { // reverse배열에 저장되어 있는 수들을 차례대로 출력한다.
		printf("%d ", *(reversed + j));
	}
	return 0;
}
