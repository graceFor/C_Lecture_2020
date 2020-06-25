// A program that takes a series of integers until -1 is entered and calculates how many integers it finds.
#include <stdio.h>
int count(const int a[], const int comp, int last) { // 배열 a의 마지막 요소 인덱스가 last일 때 배열 내부에 comp와 같은 숫자가 몇 번 나타나는지 구하는 함수
	if (last == -1) // base case
		return 0;
	else if (a[last] == comp) // a 배열 마지막 값을 comp와 비교해 값이 같으면
		return (count(a, comp, last - 1)) + 1; // 1을 더해서 재귀호출을 반환한다.
	else // 값이 같지 않으면
		return count(a, comp, last - 1); // 바로 재귀호출을 반환한다.
}

int main() {
	int i, last, comp, num[100];

	printf("Enter input number.\n");
	for (last = 0; last < 100; last++) { // 입력받은 숫자들을 num 배열에 집어 넣는다.
		scanf("%d", &num[last]);
		if (num[last] == -1) // -1을 입력받으면 for문을 나와라
			break;
	}
	printf("Enter a number to search.\n");
	scanf("%d", &comp);
	printf("%d appear %d times.\n", comp, count(num, comp, last - 1)); // num 배열 마지막에 -1이 들어있으므로 하나 앞에서 호출
	return 0;
}