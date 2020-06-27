// It is a program that receives a sentence and outputs how many times the vowel appears.

#include <stdio.h>

int count_vowel(char* arr, int length) { // 배열 안에 모음이 몇 개 있는지 count 하는 함수.
	int count = 0;
	char* cp;

	for (int i = 0; i < length; i++) {
		cp = arr + i; // cp포인터의 인덱스를 증가시킨다
		if (*cp == 'a' || *cp == 'e' || *cp == 'i' || *cp == 'o' || *cp == 'u') // 배열이 가르키는 인덱스에서 모음이 있으면 count++를 해라
			count++;
	}
	return count;
}

int main() {
	int i = 0;
	char ch, a[100];

	printf("Enter a sentence.\n"); // 소문자로만 이루어진 문장을 입력받는다고 가정한다.
	for (i = 0; (ch = getchar()) != '\n'; i++) { // 입력받은 문장을 a 배열에 넣어라
		a[i] = ch;
	}
	printf("Vowel appears %d times.\n", count_vowel(a, i));
	return 0;
}