// If "e" is checked in the received sentence, "Yes" is displayed. If not, "No" is outputted.
#include <stdio.h>

int main() {
	int i, j = 0;
	char A[100], ch;

	for (i = 0; (ch = getchar()) != '\n'; i++) { // 입력받은 문자들을 A 배열에 집어 넣는다.
		A[i] = ch;
	}
	A[i] = 'e'; // 배열의 마지막에 'e'를 넣는다.

	while (A[j] != 'e') { // 첫번째 'e'가 나올 때까지 j를 증가시킨다.
		j++;
	}
	if (i == j) // 같으면 'e'가 입력받은 문장에 존재하지 않는다. 
		printf("No.\n");
	else // i와 j의 값이 다르면 'e'가 입력받은 문장에 존재한다. 
		printf("Yes.\n");

	return 0;
}