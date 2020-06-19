// It is a program that drives the encryption method 'Caeser Cipher'. Enter the key and string to encrypt the string.
#include <stdio.h>
int main() {
	int key, ch;

	printf("Enter the key.\n");
	scanf("%d", &key);
	getchar();
	printf("Enter the text.\n");

	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		if (ch >= 0 && ch <= 127)
			ch = (ch + key) % 128;
		putchar(ch);
	}
	return 0;
}