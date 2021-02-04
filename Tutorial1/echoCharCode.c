//echo_char_code function

#include <stdio.h>

void echo_char_code() {
	//Prompt user to enter a character.
	printf("Please enter a character:\n");
	//Fetch character code and save into variable of numeric data type.
	int ch = getchar();
	//Print input received and numeric value of character.
		//%c outputs character, %d casts char to integer to get character code
	printf("The character code of '%c' is %d.\n", ch, ch);
}

int main() {
	echo_char_code();
	return 0;
}