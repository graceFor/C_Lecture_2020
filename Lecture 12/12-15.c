// 정수의 사칙 연산하는 프로그램

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int result;
    int num1 = atoi(argv[1]);
    char *calc = argv[2];
    int num2 = atoi(argv[3]);
    
    switch (*calc) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        break;
    }
    printf("%d %c %d = %d\n", num1, *calc, num2, result);
    return 0;
}
