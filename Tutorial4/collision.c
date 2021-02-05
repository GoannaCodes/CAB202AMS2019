#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <cab202_graphics.h>
#include <cab202_timers.h>


/* bool pixel_collision(int x0, int y0, int w0, int h0, char pixels0[], int x1, int y1, int w1, int h1, char pixels1[]){
	for (int j = 0; j < h0; j++){ //y coordinate of first image
		for (int i = 0; i < w0; i++){//x coordinate of first image
			//x >= left
			if (i >= x1){
				//x < left + width
				if (i < x1 + w1){
					//y >= top
					if (j >= y1){
						//y < top + height
						if (j < y1 + h1){
							//pixels[(x - left) + (y - top) * width] != ' '
							if (pixels0[(i - x1) + (j - y1) * w1] != ' '){
								return true;
							}//end if
						}//end if
					}//end if
				}//end if 
			}//end if
		}//end for i
	}//end for j
	return false;
} */

bool pixel_collision(int x0, int y0, int w0, int h0, char pixels0[], int x1, int y1, int w1, int h1, char pixels1[]){
	//dimensions of 1st image
	//int top0 = y0;
	//int bottom0 = y0 + h0;
	int left0 = x0;
	//int right0 = x0 + w0;
	
	//dimsions of 2nd image
	//int top1 = y1;
	//int bottom1 = y1 + h1;
	int left1 = x1;
	//int right1 = x1 + w1;
	
	for (int j = 0; j < h0; j++){ //y coordinate of first image
		for (int i = 0; i < w0; i++){//x coordinate of first image
			//collides when x = 5
			if (i >= left0 || i >= left1){
				return true;
			}
		}//end of i
	}//end of for
	return false;
}

//Insert your solution to draw_pixels
void draw_pixels(int left, int top, int width, int height, char bitmap[], bool space_is_transparent){
	
	for (int j = 0; j < (height); j++){
		for (int i = 0; i < (width); i++){
			if (bitmap[i + j * width] != ' ' ){
				draw_char(left + i, top + j, bitmap[i + j * width]);
			} else if (!space_is_transparent){
				draw_char(left + i, top + j, ' ');
			}//end if
		}//end for
	}//end for
}//end function

char * cross =
"y   y"
" y y "
"  y  "
" y y "
"y   y"
;

char * plus =
"  z  "
"  z  "
"zzzzz"
"  z  "
"  z  "
;

int main(void) {
    setup_screen();
    int x0 = 21, y0 = 8, w0 = 5, h0 = 5;
    int x1 = 31, y1 = 18, w1 = 5, h1 = 5;

    while (true) {
        clear_screen();

        for (int x = 0; x < screen_width(); x++) {
            for (int y = 0; y < screen_height(); y++) {
                draw_char(x, y, '.');
            }
        }

        draw_pixels(x0, y0, w0, h0, cross, true);
        draw_pixels(x1, y1, w1, h1, plus, true);

        if (pixel_collision(
            x0, y0, w0, h0, cross,
            x1, y1, w1, h1, plus
        )) {
            draw_string(0, 0, " Pixel-level collision has been detected! ");
            draw_string(0, 1, "                                          ");
        }

        show_screen();

        int key = wait_char();

        if (key == '2') {
            y1++;
        }
        else if (key == '8') {
            y1--;
        }
        else if (key == '4') {
            x1--;
        }
        else if (key == '6') {
            x1++;
        }
        else if (key == 'q') {
            break;
        }
    }

    return 0;
}
