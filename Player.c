#include "Game.h"
#include "Player.h"

int initPlayer (player p) {
	p.position[0] = 0;
	p.position[1] = 0;
	p.visited = 1;
	p.xp = 0;
	p.spentTime = 0;
	p.maxHp = 12 + d6() + d6();
	p.hp = p.maxHp;
	p.power = 6 + d6();
	return 0;
}

int movePlayerLeft(player p){
	p.position[0]--;
	return 0;
}
int movePlayerRight(player p){
	p.position[0]++;
	return 0;
}
int movePlayerUp(player p){
	p.position[0]--; // Remember : Coords begin at the top left corner !
	return 0;
}
int movePlayerDown(player p){
	p.position[0]++; // Remember : Coords begin at the top left corner !
	return 0;
}
