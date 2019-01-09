#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ncurses.h>
#include <stdbool.h>

#include "labGen/labGen.h"

//#include "The-Shades.h"
#include "Interaction.h"
#include "Player.h"
//======main()======//
int main(void)
{
	// Init ncurses
	initscr();
	raw();
	noecho();  // Invisible keystrokes
	keypad(stdscr, TRUE); // Function keys and arrow keys

	int gameSize = 20;
	
	generate(gameSize);
	printMap(gameSize);
	refresh(); // Refreshes the screen so that the stdscr is printed
	getch();
	initPlayer();
	printMap(gameSize);
	printPlayerPosition();
	refresh();
	parseChar(); // Wait for a keystroke
	printMap(gameSize);
	printPlayerPosition();
	refresh();
	getch();
	// Finish ncurses
	endwin();
       	return 0;
}
