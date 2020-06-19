// Input the year and month and output the calendar.

#include <stdio.h>
#define true 1
#define false 0

int leap_year(int y) { // 윤년인지 평년인지 판단하는 함수
	if ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0))
		return true; // 윤년
	else
		return false; // 평년
}

int to_last_year(int year) {// 서기 1년 1월 1일부터 작년 말까지의 날짜 수를 돌려주는 함수
	int i, total = 0;

	for (i = 1; i < year; i++) {
		if (leap_year(i))
			total += 366; // 윤년은 총 366일
		else
			total += 365; // 평년은 총 365일
	}
	return total;
}

int to_last_month(int year, int month) { //  입력받은 년도의 1월 1일부터 전달 말일까지의 날짜 수를 구하는 함수
	int i, total = 0;

	for (i = 1; i < month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
			total += 31; // 큰 달이면 31일
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			total += 30; // 작은 달이면 30일
		else { // 2월은 윤년인지 평년인지에 영향을 받음
			if (leap_year(year)) 
				total += 29; // 윤년이면 29일
			else
				total += 28; // 평년이면 28일
		}
	}
	return total;
}

int this_month(int year, int month) { // 입력받은 월이 몇 일까지 있는지 반환하는 함수.
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31; // 큰 달이면 31일
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30; // 작은 달이면 30일
	else { // 2월은 윤년인지 평년인지에 영향을 받음
		if (leap_year(year))
			return 29; // 윤년이면 29일
		else
			return 28; // 평년이면 28일
	}
}

void draw_calendar(int year, int month, int start_day){ // 달력을 출력해주는 함수
	printf("                 <<  %d년  %d월  >>\n", year, month);
	printf("  ===================================\n");
	printf("   SUN  MON  TUE  WED  THU  FRI  SAT \n");
	printf("  ===================================\n");

	printf("  ");
	for (int i = 0; i < start_day; i++) { // 1일에 해당하는 요일 전까지는 공백으로 처리해라
		printf("     ");
	}
	int current_day = start_day;
	for (int j = 1; j <= this_month(year, month); j++) { // 1일부터 해당하는 요일에 날짜를 출력해라.
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
	int year, month, start_day;

	while (1) {
		printf("Enter year and month.\n");
		scanf("%d%d", &year, &month);
		printf("\n");
		if (year < 1) // A.D. 달력만 출력한다.
			break;
		// 입력받은 년도와 월의 시작 요일을 알아낸다.
		start_day = (to_last_year(year) + to_last_month(year, month) + 1) % 7;
		draw_calendar(year, month, start_day);
	}
	return 0;
}