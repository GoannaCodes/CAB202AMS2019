//flag_multiples 

#include <stdio.h>

void flag_multiples(){
	//46 - 3193
	for (int i = 46; i <= 3193; i++){
		//send current value
		printf("%d", i);
		//check if divisible by 7
		if (i % 7 == 0){
			printf(" <==");
			//add <===
		}
		//terminate current line with single linefeed character
		printf("\n");
	//end for
	}
}

int main(){
	flag_multiples();
	return 0;
}