#include <stdio.h>
#include <stdlib.h>

typedef unsigned char byte;

byte set_bit(byte register_value, int pin){
	//Modify register value by setting the designated pin
	//to 1 without altering other pins, and return the result.
	//Use left shift; binary OR.
	register_value = register_value | (1 << pin);
	return register_value;
}

byte flip_bits(byte register_value){
	//Flip all bits in the register value so that each bit that is 
	//originally 1 becomes 0, and each bit that is originally 0 becomes 1
	//Use binary NOT
	return ~register_value;
}

byte clear_bit(byte register_value, int pin){
	//Modify register value by clearing the designated pin [set to 0]
	//without altering other pins, and return the result.
	//Left shift; binary NOT; binary AND
	register_value = register_value &~(1 << pin);
	return register_value;
}

byte toggle_bit(byte register_value, int pin){
	//Modify the supplied register value by flipping the designated pin, 
	//leaving all other pins unchanged
	//Left shift; binary XOR
	register_value = register_value ^ (1 << pin);
	return register_value;
}

//-----------------------------------------------------------------------
#define REPEATS (5)
#define BYTE_COUNT (256)
#define PIN_COUNT (8)
#define SEED ((unsigned) 314159)
//-----------------------------------------------------------------------
/*
**  Convert a byte to an integer with digits that look like the binary 
**  representation of the byte.
**
**  For example:
**      binstr(0x0c) == 1100, and 
**      binstr(0xcc) == 11001100.
*/
int binstr(byte b) {
    int result = 0;

    for ( int i = 7; i >= 0; i-- ) {
        result = result * 10 + ((b >> i) & 1);
    }

    return result;
}
//-----------------------------------------------------------
int main(void) {
    srand(SEED);

    for ( int i = 0; i < REPEATS; i++ ) {
        byte register_value = rand() % BYTE_COUNT;
        int pin = rand() % PIN_COUNT;

        if ( i > 0 ) printf("\n");

        printf("   set_bit(%08d, %d) = %08d\n", binstr(register_value), pin, binstr(   set_bit(register_value, pin)));
        printf(" flip_bits(%08d   ) = %08d\n" , binstr(register_value),      binstr( flip_bits(register_value     )));
        printf(" clear_bit(%08d, %d) = %08d\n", binstr(register_value), pin, binstr( clear_bit(register_value, pin)));
        printf("toggle_bit(%08d, %d) = %08d\n", binstr(register_value), pin, binstr(toggle_bit(register_value, pin)));
    }
    return 0;
}

