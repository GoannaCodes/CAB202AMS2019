#include <stdlib.h>
#include <cab202_graphics.h>

//  Begin the definition a function called draw_rect that returns nothing, 
//  but requires the following arguments:
//
//      x1 - an int that specifies the absolute horizontal location 
//          of the left hand side of the rectangle.
//
//      y1 - an int that specifies the absolute vertical location 
//          of the upper edge of the rectangle.
//
//      x2 - an int that specifies the absolute horizontal location 
//          of the right hand side of the rectangle.
//
//      y2 - an int that specifies the absolute vertical location 
//          of the lower edge of the rectangle.
//
//      c - a character value that will be used to draw the
//          display the rectangle.

 void draw_rect(int x1, int y1, int x2, int y2, char c)
{
    //  Test to see if either the width or height of the rectangle is less 
    //  than 1. If so, the function should stop immediately and draw nothing.
	if (y2 - y1 < 1|| x2 - x1 < 1){
    //  Draw a horizontal line from left to right at the top, using the 
    //  display char.
		draw_line(x1, y1, x2, y1, c);
    //  Draw a horizontal line from left to right at the bottom, using the 
    //  display char.
		draw_line(x1, y2, x2, y2, c);
    //  Draw a horizontal line from top to bottom at the left, using the 
    //  display char.
		draw_line(x1, y1, x1, y2, c);
    //  Draw a horizontal line from top to bottom at the right, using the 
    //  display char.
		draw_line(x2, y1, x2, y2, c);
	} else if (y2 - y1 == 1){
		draw_line(x1, y1, x2, y1, c);
	} else if (x2 - x1 == 1){
		draw_line(x1, y1, x1, y2, c);
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
	draw_rect( l, t, r, b, c );
	show_screen();
	wait_char();

	return 0;
}
