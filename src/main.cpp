#include <iostream>
#include <curses.h>

using namespace std;

int main(int argc, char *argv[]){
	initscr();
	printw("hello world!");
	refresh();
	int key = getch();
	printw("%d", key);
	getch();
	endwin();
	return 0;
}
