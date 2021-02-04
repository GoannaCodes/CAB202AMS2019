//word count function

#include <stdio.h>
#include <ctype.h>

void word_count() {
	//counters for words, lines and characters
	int total = 0;
	int lines = 0;
	int words = 0;
	
	int spaces = 1; //denote whether in white space character or not
	
	//variable to store current character
	int ch;
	
	//while not EOF
	while ((ch = getchar()) != EOF){
		count++; //increment total characters counters
		
		//check for whitespace characters
		if (isspace(ch)){
			spaces = 1;
			//check if linebreak character
			if (ch == '\n'){
				lines++;
			}
		} else {
			//if not whitespace character
			words += spaces; 
			spaces = 0; //reset spaces to 0
		}
	}
	
	//output results
	printf("Lines: %d, Words: %d, Characters: %d", lines, words, total);
}//end of word_count method

int main(){
	word_count();
	return 0;
}