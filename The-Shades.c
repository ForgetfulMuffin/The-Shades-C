#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ncurses.h>
#include <stdbool.h>
#include "labGen/labGen.h"

//======main()======//
int main(void)
{
	// Init ncurses
	initscr();
	raw();
	noecho();  // Invisible keystrokes
	keypad(stdscr, TRUE); // Function keys and arrow keys

	int gameSize = 20;
	map * test = generate(gameSize);
	printMap(test, gameSize);
	refresh(); // Refreshes the screen so that the stdscr is printed
	getch(); // Wait for a keystroke

	// Finish ncurses
	endwin();
	return 0;
}
