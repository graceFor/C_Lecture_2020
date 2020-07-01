// tic - tac - toe program.

#include <stdio.h>
#include <stdlib.h>

void welcome_message() { // tic - tac - toe 게임 첫 시작화면 
	printf("Welcome to my tic-tac-toe game.\n");
	printf("The coordinates are,\n");
	printf("┌───┬───┬───┐\n");
	printf("│0 0│0 1│0 2│\n");
	printf("├───┼───┼───┤\n");
	printf("│1 0│1 1│1 2│\n");
	printf("├───┼───┼───┤\n");
	printf("│2 0│2 1│2 2│\n");
	printf("└───┴───┴───┘\n\n");
}

// initialize with a blank character
void init_board(char b[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = ' ';
		}
	}
}

void draw_board(char b[][3]) { // 보드 그림
	printf("┌───┬───┬───┐\n");
	printf("│ %c │ %c │ %c │\n", b[0][0], b[0][1], b[0][2]);
	printf("├───┼───┼───┤\n");
	printf("│ %c │ %c │ %c │\n", b[1][0], b[1][1], b[1][2]);
	printf("├───┼───┼───┤\n");
	printf("│ %c │ %c │ %c │\n", b[2][0], b[2][1], b[2][2]);
	printf("└───┴───┴───┘\n\n");
}

int who_first() { // 시작순서를 정하는 함수
	char ch;
	printf("play first? (Y/N)\n");
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
		return 1;
	else
		return 0;
}

void human_move(char b[][3]) { // 사람이 게임하는 과정
	int i, j;
	printf("It's YOUR turn.\n");
	printf("Enter coordinates. For instance, 1 0\n");
	scanf("%d %d", &i, &j);
	if (i < 0 || i > 2 || j < 0 || j > 2) {
		printf("Invalid coordinate exits the program.\n");
		exit(1);
	}
	b[i][j] = 'O';
	printf("You moved as follows.\n");
}

// 한 줄에서 두 칸이 target으로 차 있고 한 칸이 빈 경우, 컴퓨터 X로 채우고 1을 반환한다. 그렇지 않은 경우는 0을 반환한다.
int one_left(char b[][3], char target) { 
	int i, j, count_target, count_empty;

	count_target = count_empty = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (b[i][j] == target)
				count_target++;
			else if (b[i][j] == ' ')
				count_empty++;
		}
		if (count_target == 2 && count_empty == 1) {  // 만약 가로줄이 2개가 타겟이고 1개가 비어있으면
			for (j = 0; j < 3; j++) {
				if (b[i][j] == ' ') {
					b[i][j] = 'X';  // 빈 칸 컴퓨터 X가 먹고 이기기
					return 1;
				}
			}
		}
		count_target = count_empty = 0;
	}

	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
			if (b[i][j] == target)
				count_target++;
			else if (b[i][j] == ' ')
				count_empty++;
		}
		if (count_target == 2 && count_empty == 1) {  // 만약 세로줄이 2개가 내꺼고 1개가 비어있으면
			for (i = 0; i < 3; i++) {
				if (b[i][j] == ' ') {
					b[i][j] = 'X';  // 빈 칸 먹고 이기기
					return 1;
				}
			}
		}
		count_target = count_empty = 0;
	}

	// 왼쪽 위 대각선
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j) {
				if (b[i][j] == target)
					count_target++;
				else if (b[i][j] == ' ')
					count_empty++;
			}
		}
	}
	if (count_target == 2 && count_empty == 1) {
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (i == j) {
					if (b[i][j] == ' ') {
						b[i][j] = 'X';
						return 1;
					}
				}
			}
		}
	}
	count_target = count_empty = 0;

	// 오른쪽 위 대각선
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i + j == 2) {
				if (b[i][j] == target)
					count_target++;
				else if (b[i][j] == ' ')
					count_empty++;
			}
		}
	}
	if (count_target == 2 && count_empty == 1) {
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (i + j == 2) {
					if (b[i][j] == ' ') {
						b[i][j] = 'X';
						return 1;
					}
				}
			}
		}
	}

	return 0;
}

void computer_move(char b[][3]) { // 컴퓨터 X가 움직이는 함수
	int i, j, count = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (b[i][j] == 'O' || b[i][j] == 'X')
				count++;
		}
	}

	printf("Computer moved as follows.\n");

	// fight!
	if (count == 0) { // 선공이면
		b[1][1] = 'X';  // 가운데 먹기
		return;
	}
	if (count != 0) { // 선공이 아니면

	  // 다음 수를 두어서 경기를 끝낼 수 있는 경우
		if (one_left(b, 'X'))
			return;

		// 다음 수를 막지 않으면 상대가 이기는 경우
		if (one_left(b, 'O'))
			return;


		if (b[1][1] == ' ') { // 가운데가 비어있으면
			b[1][1] = 'X';  // 가운데 먹기
			return;
		}
		else {  // 가운데가 안비어있으면
			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++) {
					if (i + j % 2 == 0 && b[i][j] == ' ') { // 모서리중에 비어있는곳 먹기
						b[i][j] = 'X';
						return;
					}
				}
			}
		}
	}

	// default - 앞에서부터 순서대로 돌다가 남는데 먹기
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (b[i][j] == ' ') {
				b[i][j] = 'X';
				return;
			}
		}
	}
}

int check(char b[][3], char ch) { // 게임 중에 승자가 나왔나 확인하는 함수
	int i, j, matched = 0, count = 0;

	// horizontal line check
	for (i = 0; i < 3; i++) {
		if (b[i][0] == ch && b[i][1] == ch && b[i][2] == ch) {
			matched = 1;
		}
	}

	// vertical line check
	for (j = 0; j < 3; j++) {
		if (b[0][j] == ch && b[1][j] == ch && b[2][j] == ch) {
			matched = 1;
		}
	}

	// diagonal line check
	if (b[1][1] == ch) {
		if ((b[0][0] == ch && b[2][2] == ch) || (b[0][2] == ch && b[2][0] == ch)) {
			matched = 1;
		}
	}

	if (matched) {
		if (ch == 'X')
			return 0; // computer won.
		else
			return 1; // human won.
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (b[i][j] == ' ')
				count++;
		}
	}
	if (count == 0)
		return 2; // board full (It's a draw).
	return 3;   // continue game.
}

int main() {
	int turn, game_over = 0, state;
	char board[3][3];

	welcome_message();
	init_board(board);
	turn = who_first();

	while (!game_over) {
		if (turn == 1) {
			human_move(board);
			state = check(board, 'O');
		}
		else {
			computer_move(board);
			state = check(board, 'X');
		}
		draw_board(board);

		if (state == 0) {
			printf("Computer won.\n\n");
			game_over = 1;
		}
		else if (state == 1) {
			printf("You won.\n\n");
			game_over = 1;
		}
		else if (state == 2) {
			printf("It's a draw.\n\n");
			game_over = 1;
		}
		turn = (turn + 1) % 2;  // toggles the turn
	}

	return 0;
}