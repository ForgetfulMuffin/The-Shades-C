#include <stdio.h>
#include <stdlib.h>

#include "Game.h"
/**
 * Your standard die. Six sides, numbered 1 to 6
 */
int d6() {
	return (rand() % 6) + 1;
}
/**
 * For more comfort and more compact code
 */
int 2d6() {
	return d6() + d6();
}
