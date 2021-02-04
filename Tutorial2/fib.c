//fibonacci function

#include <stdio.h>
#include <stdlib.h>

//Declare an array called fib_val with 29 elements
int fib_val [ 29 ];

void fibonacci(){
	int x, y;
	//read two integer values from standard input
	scanf("%d%d", &x, &y);
	//store into first two elements of array
	fib_val[0] = x;
	fib_val[1] = y;
	
	//populate remainder of array with consecutive terms of Fibonacci-like
		//sequence grown from seed values.
		for (int i = 2; i < 29; i++){
			int num = fib_val[i - 1] + fib_val[i - 2];
			fib_val[i] = num;
		}
}

int main(){
	fibonacci();
	
	for (int i = 0; i < 29; i++){
		printf("%d\n", fib_val[i]);
	}
	return 0;
}