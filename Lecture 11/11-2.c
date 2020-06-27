// It is a program that stores and outputs 5 to num using two methods.

#include <stdio.h>

int main(){
    int num, *p, **q;

    // 첫 번째 방법 - p를 사용하여 num에 5를 저장한 후 p를 통해서 num 값을 출력한다.
	p = &num; // p 포인터는 num 주소지를 가르키고 있고,
	*p = 5; // p가  가르키고 있는 num에 5를 대입한다.
	printf("num = %d, using 'p' pointer.\n", *p);

    //두 번째 방법 - q를 사용하여 num에 5를 저장한 후 p를 통해서 num 값을 출력한다.
	q = &p; // q 포인터는 p 포인터의 주소지를 가르키고 있고,
	**q = 5; // q가 가르키고 있는 p의 주소지를 쫓아가서 p가 가르키고 있는 num에 5를 대입한다.
	printf("num = %d, using 'q' pointer.\n", **q);
    return 0;

}