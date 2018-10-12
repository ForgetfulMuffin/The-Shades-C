#ifndef PLAYER_H

#define PLAYER_H

#include "Item.h"

struct _player {
	char * name;
	int position[2];
	int maxHp, hp, power, xp, spentTime, visited;
	item inventory[6], equip[1];
};

typedef struct _player player;

int initPlayer(player p);

int movePlayerLeft(player p);
int movePlayerRight(player p);
int movePlayerUp(player p);
int movePlayerDown(player p);

#endif /* end of include guard: PLAYER_H */
