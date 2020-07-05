// my_strcpy 함수를 구현하는 프로그램이다.

#include <stdio.h>
#include <stdlib.h>

char* my_strcpy(char* dest, const char* src, int index) { // src배열의 문자열들을 복사해 dest 배열에 넣는 함수.
	if (src[index] == '\0') { // src 배열이 '\0'이면 문자열의 끝이므로 복사해서 빠져나와야한다.
		dest[index] = '\0';
		return dest;
	}
	dest[index] = src[index];
	my_strcpy(dest, src, index + 1);
}

int main() {
	char dest[50], src[50];

	printf("Enter the source string.\n");
	gets(src);
	printf("destination string is ");
	puts(my_strcpy(dest, src, 0));
	
	return 0;
}