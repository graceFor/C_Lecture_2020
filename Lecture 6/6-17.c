// The number of prepositions 'in' is displayed on the screen.
#include <stdio.h>
#include <ctype.h>

int main() {
	int ch, state, count;

	state = 0; count = 0;
	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		
		switch (state) {
		case 0: // state 0 : wait state
			if (ch == ' ')
			state = 1;
			break;
		case 1: // state 1 : Blank '' entered
			if (ch == 'i') // If you enter 'i' after the blank, state 2
				state = 2;
			else if (ch == ' ') // If you enter another blank, state 1.
				state = 1;
			else 
				state = 0;
			break;
		case 2: // state 2: '' + 'i' 
			if (ch == 'n')  // Entering n in state 1 is state 3.
				state = 3;
			else if (ch == ' ') // If you enter another blank, state 1.
				state = 1;
			else 
				state = 0;
			break;
		case 3: // state 3: ' ' + 'i' + 'n'
			if (ch == ' '){ // ' ' + 'i' + 'n'인 상태에서 ' ' 을 입력하면, 전치사 in의 수를 count 하고 다시 state 0으로 가라.
				count++;
				state = 0;
			}
			else
				state = 0;
			break;
		}
	}
	printf("The preposition 'in' appears %d times.\n", count);
	return 0;
}


