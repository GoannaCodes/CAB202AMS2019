#include <stdio.h>
#include <stdlib.h>

//Declare array called list with 30 elements, type double
double list [ 30 ];

//keep track of number of items added to list
int list_size;

//store total sum of items stored in list
double list_sum;

void array_sum(){
	//initialise list_size to 0
	list_size = 0;
	
	//Append items to list by reading from standard input until either
		//list >= 30 or value returned by scanf isn't 1
	while ( list_size < 30 && scanf("%lf", &list[list_size]) == 1){
		list_size++;
	}
	
	//Assign 0 to list_sum
	list_sum = 0;
	
	//add up sum within list
	for (int i = 0; i < list_size; i++){
		list_sum += list[i];
	}
	
}

int main(){
	array_sum();
	
	//Display contents of array list
	for (int i = 0; i < list_size; i++){
		printf("%f", list[i]);
	}
	
	printf("\n");
	printf("Item count: %d\n", list_size);
	printf("Item sum  : %f\n", list_sum);
	
	return 0;
}