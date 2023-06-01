#include <iostream>
#include <curses.h>

using namespace std;

int main(int argc, char *argv[]){
	initscr();
	cbreak();
	//raw();
	noecho();
	int height, width, start_x, start_y;
	height = 10;
	width = 20;
	start_x = start_y = 10;
	WINDOW *win = newwin(height, width, start_y, start_x);
	refresh();
	int left, right, top, bottom, tlc, trc, blc, brc;
	left = right = (int)'#';
	top = bottom = (int)'*';
	tlc = trc = blc = brc = (int)'x';
	wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
	mvwprintw(win, 1, 1, "nya kitty cat");
	wrefresh(win);
	getch();
	getch();
	endwin();
	return 0;
}
