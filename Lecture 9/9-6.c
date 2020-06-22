// When 10 people vote for 8 candidates, if they exceed the majority, they will be elected, otherwise they will not be elected.
#include <stdio.h>

int main() {
	int vote[10];
	int count[8] = { 0 };
	int winner;
	int max = 0;

	printf("Enter the result of voting.\n");

	for (int i = 0; i < 10; i++) { // 10���� ��ǥ ����� vote �迭�� �����ϴ� for��.
		scanf("%d", vote + i);
	}
	for (int i = 0; i < 10; i++) { // vote ǥ�� �ش��ϴ� �ĺ��ڵ��� ǥ ���� �迭�� �־��ش�.
		count[vote[i] - 1]++; 
	}
	for (int i = 0; i < 8; i++) { // count[i]�� ����ִ� ���� �� �ִ� ��ǥ���� �� ��ǥ�� ���� �ĺ��ڸ� ���ϴ� for��.
		if (max < count[i]) {
			max = count[i];
			winner = i + 1;
		}
	}
	if (max > 5) { // ���ݼ��� ǥ�� ������ �缱�� �ȴ�.
		printf("Number %d is the winner.\n", winner);
	}
	else // ���ݼ��� ���� ���ϸ� �缱�ڴ� ����.
		printf("There is no elected candidate because it does not exceed the majority.");
	return 0;
}