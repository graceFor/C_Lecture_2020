// �޷��� ������ִ� �Լ��� test ���ִ� ���α׷�

#include <stdio.h>

void draw_calendar(int start_day, int this_month) { // �޷��� ������ִ� �Լ�
	int year = 2019;
	int month = 4;
	printf("                 <<  %d��  %d��  >>\n", year, month); // ��) 2019�� 4��
	printf("  ===================================\n");
	printf("   SUN  MON  TUE  WED  THU  FRI  SAT \n");
	printf("  ===================================\n");

	printf("  ");
	for (int i = 0; i < start_day; i++) { // 1�Ͽ� �ش��ϴ� ���� �������� �������� ó���ض�
		printf("     ");
	}
	int current_day = start_day;
	for (int j = 1; j <= this_month; j++) { // 1�Ϻ��� �ش��ϴ� ���Ͽ� ��¥�� ����ض�.
		printf(" %3d ", j);
		current_day++; // ���� ������ ���� ���Ϸ� �����ض�.
		if (current_day == 7) { // ������� �� �ٹٲ��� �ض�.
			printf("\n  ");
			current_day = 0;
		}
	}
	printf("\n\n");
}

int main() {
	int  start_day, this_month;

	for (start_day = 0; start_day < 7; start_day++) { // 1�Ͽ� �ش��ϴ� ������ ����� ���� ��� ��������. 
		for (this_month = 28; this_month <= 31; this_month++) { // 28~31�Ͽ� ������ ��쵵 ��� ���� ����.
			draw_calendar(start_day, this_month);
		}
	}
}