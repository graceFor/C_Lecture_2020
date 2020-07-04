// strstr 함수와 동일한 역할을 하는 함수를 구현하는 프로그램이다.
#define true 1
#define false 0
#include <stdio.h>
#include <string.h>

char* my_strstr(const char *str1, const char *str2) { // 어떤 배열 안 문자열 안에 어떤 문자열이 존재하면 그 문자열부터의 쭉 출력하는 함수.
  const char *temp1 = str1, *temp2 = str2;
  int i, length = (int)strlen(str2);
  int matched = false;

  while (*temp1 != '\0') { // str1의 끝까지
    if (*temp1 == *temp2) { // str1 배열에 있는 문자와 str2 배열에 있는 문자 중 첫 문자가 같으면
      matched = true; // 우선은 matched를 참으로 놓고
      for (i = 0; i <= length -1; i++) {
        if (*(temp1 + i) != *(temp2 + i)) { // 그다음 문자들이 같지 않으면
          matched = false;
          break; // match가 되지 않았으므로 빠져나와라.
        }
      }
      if (matched == true) {
        return temp1;
      }
    }
    temp1++; // 첫문자가 같지 않으면 temp1을 다음 문자를 가르키게 이동시킨다.
  }
  if (matched == false) return NULL; // str1 안에 str2의 문자열이 아예 없으면
}

int main() {
  char string1[100], string2[100], *position;
  while (1) {
    printf("Enter string 1.\n");
    gets(string1);

    if (strcmp(string1, "quit") == 0) // str배열에 quit를 입력하면 루프를 빠져나와라
      break;
    
    printf("Enter string 2.\n");
    gets(string2);

    position = my_strstr(string1, string2);
    (position == NULL) ? printf("No such string.\n") : puts(position);
  }

  return 0;
}