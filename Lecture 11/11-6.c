// It is a program that receives positive integers and outputs them backwards.

#include <stdio.h>
#include <stdlib.h> // 동적할당을 위해 필요한 헤더 

int* reverse_array(int* a, int length) {
	int* reversed;
	reversed = (int*)malloc(sizeof(int) * length); // reversed 포인터 변수의 동적할당 4바이트 * length 크기만큼 할당한다.

	if (reversed) { // a 배열에 저장되어 있는 정수들을 거꾸로 reversed 배열에 저장한다.
		int i = 0;
		while (i < length) {
			reversed[i++] = a[length - 1 - i];
		}
	}
	else { // 메모리를 할당받지 못하면
		printf("No more memory available.\n"); // 오류 메세지를 출력한다.
		exit(1);
	}

	return reversed;
}

int main() {
	int i = 0, num, length, original[100], * reversed;

	printf("Enter a sequence of positive integers.\n");
	while (1) {
		scanf("%d", &num);
		if (num <= 0) // num에 0보다 작거나 같은 수가 입력되면 break
			break;
		original[i++] = num; // original 배열에 입력받은 숫자들을 넣는다.
	}
	length = i;

	reversed = reverse_array(original, length);
	for (i = 0; i < length; i++) // reverse배열에 저장되어 있는 수들을 차례대로 출력한다.
		printf("%d ", reversed[i]);

	printf("\n");
	free(reversed); // malloc으로 동적할당 받은 변수를 삭제한다.
	return 0;
}