// This is a program that takes two strings and swaps them by reference call.

#define MAX_LEN 100
#include <stdio.h>

void swap_string(char* a, char* b){ 
    int i, temp[MAX_LEN];
    for(i=0; *(a+i) !='\0';i++){ // a string을 temp string으로 복사
        temp[i]=*(a+i); 
    }
    temp[i] ='\0'; // 문자열 끝임을 표시
    for(i=0; *(b+i) !='\0';i++){ // b string을 a string으로 복사
        a[i]=*(b+i); 
    }
    a[i] ='\0'; // 문자열 끝임을 표시
    for(i=0; *(temp+i) !='\0';i++){ // temp string을 b string으로 복사
        b[i]=*(temp+i); 
    }
    b[i] ='\0'; // 문자열 끝임을 표시
}

int main(){
    int i;
    char ch, string1[MAX_LEN], string2[MAX_LEN];

    printf("Enter string 1.\n");
    for(i=0; (ch=getchar()) != '\n'; i++){ // string1 배열에 문자를 입력받는다.
        string1[i] =ch;
    }
    string1[i]='\0';
    printf("Enter string 2.\n");
    for(i=0; (ch=getchar()) != '\n'; i++){ // string1 배열에 문자를 입력받는다.
        string2[i] =ch;
    }
    string2[i]='\0';

    swap_string(string1, string2);
    printf("After swapping,\n");
    printf("string 1 is %s\n", string1);
    printf("string 2 is %s\n", string2);

    return 0;

}