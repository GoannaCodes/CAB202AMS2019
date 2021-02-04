//roll dice

#include <stdio.h>
#include <stdlib.h>

//Declare an array called dice_rolls with 59 elements
int dice_rolls [ 59 ];

void roll_dice(){
	//seed random number generator
	srand(427827);
	
	//generate 59 random values between 1 and 8
	for (int i = 0; i < 59; i++){
		//set element to random number between 1 and 8 inclusive
		int r = rand() % 8 + 1;
		dice_rolls[i] = r;
	}//end loop
}

int main(void){
	roll_dice();
	
	//Display contents of array dice_rolls.
	for (int i = 0; i < 59; i++){
		if (i > 0) {
			printf(",");
		}
		printf("%d", dice_rolls[i]);
	}
	
	printf("\n");
	return 0;
}