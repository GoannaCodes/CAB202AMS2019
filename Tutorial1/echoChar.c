//echo_char function

#include <stdio.h>

void echo_char() {
	//Prompt user to enter a single character
	printf("Please enter a single character:\n");
	
	//Fetch a character code from standard input
	int ch = getchar();
	
	//Send character entered by user.
	printf("You entered the character '%c'.\n", ch); 
}

int main(){
	//call echo_char function
	echo_char();
	return 0;
}