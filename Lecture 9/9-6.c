// When 10 people vote for 8 candidates, if they exceed the majority, they will be elected, otherwise they will not be elected.
#include <stdio.h>

int main() {
	int vote[10];
	int count[8] = { 0 };
	int winner;
	int max = 0;

	printf("Enter the result of voting.\n");

	for (int i = 0; i < 10; i++) { // 10명의 투표 결과를 vote 배열에 저장하는 for문.
		scanf("%d", vote + i);
	}
	for (int i = 0; i < 10; i++) { // vote 표에 해당하는 후보자들의 표 수를 배열에 넣어준다.
		count[vote[i] - 1]++; 
	}
	for (int i = 0; i < 8; i++) { // count[i]에 들어있는 값들 중 최대 득표수와 그 득표를 받은 후보자를 구하는 for문.
		if (max < count[i]) {
			max = count[i];
			winner = i + 1;
		}
	}
	if (max > 5) { // 과반수의 표를 받으면 당선이 된다.
		printf("Number %d is the winner.\n", winner);
	}
	else // 과반수를 넘지 못하면 당선자는 없다.
		printf("There is no elected candidate because it does not exceed the majority.");
	return 0;
}