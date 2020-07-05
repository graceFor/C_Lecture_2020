// Rabin-Karp 알고리즘을 이용하여 문자열을 탐색하는 프로그램이다.

#include <stdio.h>
#include <string.h>
#include <math.h>

int hash(const char* str) {  // 문자를 숫자로 변환하는 함수
	int length, mux, result = 0;
	length = strlen(str);
	mux = (int)pow(10, strlen(str) - 1);
	for (int i = 0; i < length; i++) { // 문자를 총 숫자로 얼마인지를 알아낸다
		result += str[i] * mux;
		mux /= 10;
	}
	return result;
}

const char* strstr_by_hash(const char* str1, const char* str2) { // 해당 문자열이 문장 안에 존재하는지를 확인하는 함수
	int hash1, hash2;
	int str1len = strlen(str1);
	char teststr[100];
	hash2 = hash(str2);

	for (int i = 0; i < str1len; i++) {
		strncpy(teststr, str1, strlen(str2));
        teststr[strlen(str2)] = '\0';
		hash1 = hash(teststr);
		if (hash1 == hash2 && !strcmp(teststr, str2)) { // 해쉬 값도 같으면서 진짜 문자열이 일치하는 경우
			return str1;
		}
		str1++;
	}
	return NULL;
}

int main() {
	char str[200], search[100], result[200];
	printf("Enter text.\n");
	gets(str);
	printf("Enter search string.\n");
	gets(search);

	if (strstr_by_hash(str, search))
		puts(strstr_by_hash(str, search));
	else
		printf("No such string.\n");

	return 0;
}