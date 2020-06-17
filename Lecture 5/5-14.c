// Calculator
#include <stdio.h>
void float_calculate(double op1, char op, double op2) {
	switch (op) {
	case '+':
		printf("%.3f + %.3f = %.3f.\n", op1, op2, op1 + op2);
		break;
	case '-':
		printf("%.3f - %.3f = %.3f.\n", op1, op2, op1 - op2);
		break;
	case '*':
		printf("%.3f * %.3f = %.3f.\n", op1, op2, op1 * op2);
		break;
	case '/':
		printf("%.3f / %.3f = %.3f.\n", op1, op2, op1 / op2);
		break;
	default:
		printf("Not an allowable operator.\n");
		break;
	}
}

void int_calculate(int op1, char op, int op2) {
	switch (op) {
	case '+':
		printf("%d + %d = %d.\n", op1, op2, op1 + op2);
		break;
	case '-':
		printf("%d - %d = %d.\n", op1, op2, op1 - op2);
		break;
	case '*':
		printf("%d * %d = %d.\n", op1, op2, op1 * op2);
		break;
	case '/':
		printf("%d / %d = %d.\n", op1, op2, op1 / op2);
	case '%':
		printf("%d %% %d = %d.\n", op1, op2, op1 % op2);
		break;
	default:
		printf("Not an allowable operator.\n");
		break;
	}
}

int main() {
	int calc_type;
	char operator;
	double operand1, operand2;
	int operand3, operand4;

	printf("Enter 1 for floating point calculation, 2 for integer calculation.\n");
	scanf("%d", &calc_type);

	if (calc_type == 1) {
		printf("Enter an expression. For example, 2.20 + 5.50.\n");
		scanf("%lf %c %lf", &operand1, &operator, &operand2);
		float_calculate(operand1, operator, operand2);

	}
	else if (calc_type == 2) {
		printf("Enter an expression. For example, 2 + 5.\n");
		scanf("%d %c %d", &operand3, &operator, &operand4);
		int_calculate(operand3, operator, operand4);
	}
	return 0;
}