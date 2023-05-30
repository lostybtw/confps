#include <iostream>
#include <curses.h>

using namespace std;

int main(int argc, char *argv[]){
	initscr();
	int x,y;
	x = y = 10;
	move(y,x);
	printw("hello world!");
	refresh();
	int key = getch();
	clear();
	move(0,0);
	printw("%d", key);
	refresh();
	getch();
	endwin();
	return 0;
}
