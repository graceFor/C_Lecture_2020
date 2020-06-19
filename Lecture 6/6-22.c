// 3, 6, 9 game programs. If the number contains 3, 6, or 9, print '!' On the screen. Otherwise, print the number.
#include <stdio.h>
int main() {
	int num;
	int count = 0;

	printf("Enter a number.\n");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) { // 입력받은 숫자까지 증감을 시킨다.
		for (int j = i; j != 0; j = j / 10) { // 일의 자리부터 각 자리에 3이나 6, 9가 있는지 확인한다.
			if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9) { // 일의 자리부터 각 자리에 3이나 6, 9가 있으면 count++
				count++;
			}
		}

		if (count == 0)
			printf("%d", i);
		else
			for (int i = 0; i < count; i++)
				printf("!"); // 3이나 6, 9가 나온 갯수만큼 '!'를 찍는다.
		count = 0;
		printf(" ");
	}
	return 0;
}