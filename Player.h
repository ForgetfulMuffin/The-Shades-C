#ifndef PLAYER_H

#define PLAYER_H

#include "Items.h"

struct _player {
	char * name;
	int position[2];
	int maxHp, hp, power, xp, spentTime, visited;
	item inventory[6], equip[1];
};

typedef struct _player player;

int initPlayer();

int movePlayerLeft();
int movePlayerRight();
int movePlayerUp();
int movePlayerDown();

extern player thePlayer;

#endif /* end of include guard: PLAYER_H */
