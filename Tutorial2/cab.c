//cab202 

#include <stdio.h>

void cab_202(){
	for (int i = 46; i <= 3193; i++){
		//if divisible by 7, return CAB
		if (i % 7 == 0){
			//check if also divisible by 11
			if (i % 11 == 0){
				printf("CAB202\n");
			}//end if both
			else {
				//if only divisible by 7
				printf("CAB\n"); 
			}
		} else {
			if (i % 11 == 0){
				printf("202\n");
			}//end divisible by 11
			else {
				printf("%d\n", i);
			}//end else 
		}//end else
	}//end for
}

int main(){
	cab_202();
	return 0;
}