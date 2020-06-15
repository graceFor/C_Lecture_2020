#include <stdio.h>
int main() {
	char ch1, ch2, ch3;
	printf("이름.\n");
	scanf("%c", &ch1);
	printf("%c.\n", ch1);

	printf("수강목적");
	scanf(" %c", &ch2);
	printf("%c \n", ch2);

	printf("희망학점\n");
	scanf(" %c", &ch3);
	printf("%c\n", ch3);

	
	return 0;

}

