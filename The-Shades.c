#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ncurses.h>
#include <stdbool.h>
#include "labGen/labGen.h"

//======main()======//
int main(void)
{
	initscr();
	raw();
	noecho();
	keypad(stdscr, TRUE);
	int gameSize = 20;
	map * test = generate(gameSize);
	printMap(test, gameSize);
	refresh();
	getch();
	endwin();
	return 0;
}
