#include <cab202_graphics.h>
#include <cab202_timers.h>

void charry_night(int x_pos[], int y_pos[], int xy_count){
	//clear screen
	clear_screen();
	
	//set up counter controlled loop that will iterate over the arrays
	for (int t = 0; t < (xy_count); t++){
		//place '$' in position
		draw_char(x_pos[t], y_pos[t], '$');
	}
	//show contents of updated screen
	show_screen();
	
}//end of function

#include <stdlib.h>
#include <time.h>

// Helper functions used by test driver 
void draw_test_pattern(void);
void random_fill_array(int x[], int n, int max);

// Minimal test driver. Modify this to carry out tests.
int main() {
    setup_screen();
    const int WIDTH = screen_width();
    const int HEIGHT = screen_height();

    draw_test_pattern();

    // Simulate the test setup process.
    srand(time(NULL));

    const int MAX_ITEMS = 200;
    const int MIN_ITEMS = 20;

    int x_coord[MAX_ITEMS];
    int y_coord[MAX_ITEMS];

    random_fill_array(x_coord, MAX_ITEMS, WIDTH);
    random_fill_array(y_coord, MAX_ITEMS, HEIGHT);

    int num_items = MIN_ITEMS + rand() % (MAX_ITEMS - MIN_ITEMS);

    for (int i = 0; i < num_items; i++) {
        x_coord[i] = rand() % WIDTH;
        y_coord[i] = rand() % HEIGHT;
    }

    // Call submitted code.
    charry_night(x_coord, y_coord, num_items);

    timer_pause(5000);
    return 0;
}

void draw_test_pattern() {
    const int MESS = 1000;
    srand(752014);

    for (int i = 0; i < MESS; i++) {
        draw_char(rand() % screen_width(), rand() % screen_height(), 'a' + rand() % 26);
    }

    show_screen();
}

void random_fill_array(int x[], int n, int max) {
    for (int i = 0; i < n; i++) {
        x[i] = rand() % max;
    }
}