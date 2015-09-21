#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "labGen/labGen.h"

//======main()======//
int main(void)
{
	int bob = 6;
	map * test = generate(bob);
	printMap(test, bob);
	return 0;
}
