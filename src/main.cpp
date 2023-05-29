#include <iostream>
#include <curses.h>

using namespace std;

int main(int argc, char *argv[]){
	cout << "hello world!" << endl;
	initscr();
	refresh();
	endwin();
	return 0;
}
