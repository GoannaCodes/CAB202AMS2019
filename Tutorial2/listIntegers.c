//list integers function

#include <stdio.h>

void list_integers(){
	//Display title message
	printf("Listing integers between 19 and 400...\n");
	
	//Enter counter-controlled loop which will start at 19
	//and increments up to and including 400
	for (int i = 19; i <= 400; i++){
		//Print current value of the counter variable
		printf("%d\n", i);
	//End loop
	}
}

int main(){
	list_integers();
	return 0;
}
