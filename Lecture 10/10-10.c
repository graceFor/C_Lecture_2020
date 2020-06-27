// It is a program to judge whether the inputted sentence is a palindrome or not.
#include <stdio.h>
#define true 1
#define false 0

int is_palindrome(char s[], int first, int last){ // 회문인지 아닌지 판단하는 함수다.
	if (first >= last) // base case
		return true;
	if (s[first] != s[last]) // 배열 s의 첫 문자와 마지막 문자가 같지 않으면 회문이 아니다.
		return false;
	else // 배열 s의 첫 문자와 마지막 문자가 같으면 
		is_palindrome(s, first + 1, last - 1);   // 앞쪽의 다음 문자와 뒤쪽의 다음 문자와 비교한다.
}

int main() {
	int i, j;
	char A[100] = { 0 }, ch;
	
    printf("Enter input sentence.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) {
		A[i] = ch;
	}
	if (is_palindrome(A, 0, i - 1) == false) { // 회문이 아니면
		printf("No, it is NOT a palindrome.\n");
	}
	else // 회문이면
		printf("Yes, it is a palindrome.\n");

	return 0;
}