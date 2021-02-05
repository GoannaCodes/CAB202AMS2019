#include <stdlib.h>
#include <cab202_graphics.h>

//  (a) Begin the definition a function called fill_rect that returns nothing, 
//      but requires the following arguments:
//      x1 - an integer that specifies the absolute horizontal location 
//          of the left hand side of the rectangle.
//      y1 - an integer that specifies the absolute vertical location 
//          of the y1 edge of the rectangle.
//      x2 - an integer that specifies the absolute horizontal location 
//          of the right hand side of the rectangle.
//      y2 - an integer that specifies the absolute vertical location 
//          of the y2 edge of the rectangle.
//      display_char = a character value that will be used to draw the
//          display the rectangle.

void fill_rect(int x1, int y1, int x2, int y2, char display_char){
    //  (b) Test to see if either the width or height of the rectangle is less 
    //      than 1. If so, the function should return immediately without drawing anything.
	if (y2 - y1 > 1|| x2 - x1 > 1){
    //  (c) Use statements of your own choice to fill the region defined by the
    //      first four arguments with the designated character value.
    // Option 1: Nested for loop; draw chars.
    //           FOR x = left to right
    //              FOR y = top to bottom
    //                 Draw char at (x,y)
		for (int x = x1; x <= x2; x++){
			for (int y = y1; y <= y2; y++){
				draw_char(x, y, display_char);
			}
		} 
	} else if (x1 == x2){ //if width is the same 
		for (int x = x1; x <= x2; x++){
			draw_line(x, y1, x, y2, display_char); //draw up and down
		}
	} else if (y1 == y2){//if height is the same
		for (int y = y1; y <= y2; y++){
			draw_line(x1, y, x2, y, display_char); //draw right and left
		}
	}
		
   
		

}


int main( void ) {
	int l, t, r, b;
	char c;

	printf( "Please enter the horizontal location of the left edge of the rectangle: " );
	scanf( "%d", &l );

	printf( "Please enter the vertical location of the top edge of the rectangle: " );
	scanf( "%d", &t );

	printf( "Please enter the horizontal location of the right edge of the rectangle: " );
	scanf( "%d", &r );

	printf( "Please enter the vertical location of the bottom edge of the rectangle: " );
	scanf( "%d", &b );

	printf( "Please enter the character used to draw the rectangle? " );
	scanf( " %c", &c );

	setup_screen();
	fill_rect( l, t, r, b, c );
	show_screen();
	wait_char();

	return 0;
}
