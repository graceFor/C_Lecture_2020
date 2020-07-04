// strcmp 함수와 동일한 역할을 하는 함수를 만들어 구현하는 프로그램이다. 또한 입력받은 두 개의 문자열의 크기를 비교해 출력한다.

#include <stdio.h>

int my_strcmp(const char* str1, const char* str2) { // 문자열을 비교하는 함수
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0') {
		if (str1[i] > str2[i]) {
			return 1; // str1 > str2이면 양수를 return하는데 1을 리턴하도록 가정한다.
		}
		else if (str1[i] < str2[i]) {
			return -1; // str1 < str2이면 음수 return하는데 -1을 리턴하도록 가정한다.

		}
		i++;
	}
	return 0; // str1 = str2
}

int main() {
	char str1[50], str2[50];

	while (1) {
		printf("Enter string 1.\n");
		gets(str1);
		if (my_strcmp(str1, "quit") == 0) // str1배열에 quit를 입력하면 루프를 빠져나와라
			break;
		printf("Enter string 2.\n");
		gets(str2);
		printf("Result of strcmp(str1, str2) is %d.\n", my_strcmp(str1, str2));
	}
	return 0;
}