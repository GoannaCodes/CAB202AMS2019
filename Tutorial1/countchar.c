//count chars function

#include <stdio.h>

void count_chars() {
	//Declare an integer variable which will be used to count characters
	//Initialise variable to zero
	int count = 0;

	//Enter a loop which continues indefinitely.
	while(1){
		//Read a single character code from standard input
		int ch = getchar();
		//If the character code is equal to EOF, break out of the loop
		if (ch == EOF){
			break;
		}
		//Increment the counter by 1
		count++;
	//End the body of the loop
	}
	
	//Display the number of characters processed.
		//%d used for displaying ints
	printf("The document contains %d characters.\n", count);
}

int main() {
	count_chars();
	return 0;
}