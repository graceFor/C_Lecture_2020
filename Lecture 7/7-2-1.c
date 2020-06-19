// 달력을 출력해주는 함수를 test 해주는 프로그램

#include <stdio.h>

void draw_calendar(int start_day, int this_month) { // 달력을 출력해주는 함수
	int year = 2019;
	int month = 4;
	printf("                 <<  %d년  %d월  >>\n", year, month); // 예) 2019년 4월
	printf("  ===================================\n");
	printf("   SUN  MON  TUE  WED  THU  FRI  SAT \n");
	printf("  ===================================\n");

	printf("  ");
	for (int i = 0; i < start_day; i++) { // 1일에 해당하는 요일 전까지는 공백으로 처리해라
		printf("     ");
	}
	int current_day = start_day;
	for (int j = 1; j <= this_month; j++) { // 1일부터 해당하는 요일에 날짜를 출력해라.
		printf(" %3d ", j);
		current_day++; // 현재 요일을 다음 요일로 증가해라.
		if (current_day == 7) { // 토요일일 때 줄바꿈을 해라.
			printf("\n  ");
			current_day = 0;
		}
	}
	printf("\n\n");
}

int main() {
	int  start_day, this_month;

	for (start_day = 0; start_day < 7; start_day++) { // 1일에 해당하는 요일의 경우의 수를 모두 돌려본다. 
		for (this_month = 28; this_month <= 31; this_month++) { // 28~31일에 끝나는 경우도 모두 돌려 본다.
			draw_calendar(start_day, this_month);
		}
	}
}