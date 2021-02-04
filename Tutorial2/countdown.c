//count down function

#include <stdio.h>

void count_down(){
	//for each integer 3463, descend 4 steps while counter is >= 100
	for (int i = 3463; i >= 100;){		
		//send current value w/ linefeed character
		printf("%d\n", i);
		//decrease by 4 every iteration
		i -= 4;
	//end for
	}
}

int main(){
	count_down();
	return 0;
}