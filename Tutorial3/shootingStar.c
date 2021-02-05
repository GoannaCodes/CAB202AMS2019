#include <stdlib.h>
#include <math.h>
#include <cab202_graphics.h>
#include <cab202_timers.h>

bool game_over = false;

//declare global variables
double x;
double y;
double dx;
double dy;


void setup(void){
	x = 14;
	y = 15;
	
	int t1 = 63 - 14;
	int t2 = 12 - 15;
	int d = sqrt(t1*t1 + t2*t2);
	
	dx = t1 * 0.3 / d;
	dy = t2 * 0.3 / d;
	
	draw_char(14, 15, '@');
	draw_char(63, 12, '*');
}

void loop(void){
	x += dx;
	y += dy;
	clear_screen();
	
	//draw star and bomb
	draw_char(63, 12, '*');
	draw_char(round(x), round(y), '@');
	
	//check if star and bomb meet
	if (round(x) == 63 && round(y) == 12){
		game_over = true;
	} else {
		game_over = false;
	}
	show_screen();
}

int main(){
	//milliseconds sleep between calls to loop
	const int DELAY = 10;
	
	setup_screen();
	setup();
	show_screen();
	
	while (!game_over){
		loop();
		timer_pause(DELAY);
	}
	return 0;
}