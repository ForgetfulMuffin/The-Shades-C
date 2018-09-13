#include "Game.h"
#include "Player.h"

int initPlayer (player p) {
	p.position[0] = 0;
	p.position[1] = 0;
	p.visited = 1;
	p.xp = 0;
	p.spentTime = 0;
	p.maxHp = 12 + 2d6();
	p.hp = p.maxHp;
	p.power = 6 + d6();
}
