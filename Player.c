#include "Game.h"
#include "Player.h"

player thePlayer;

int initPlayer() {
  thePlayer.position[0] = 0;
  thePlayer.position[1] = 0;
  thePlayer.visited = 1;
  thePlayer.xp = 0;
  thePlayer.spentTime = 0;
  thePlayer.maxHp = 12 + d6() + d6();
  thePlayer.hp = thePlayer.maxHp;
  thePlayer.power = 6 + d6();
  return 0;
}
int movePlayerLeft(){
  thePlayer.position[0]--;
  return 0;
}
int movePlayerRight(){
  thePlayer.position[0]++;
  return 0;
}
int movePlayerUp(){
  thePlayer.position[1]--; // Remember : Coords begin at the top left corner !
  return 0;
}
int movePlayerDown(){
  thePlayer.position[1]++; // Remember : Coords begin at the top left corner !
  return 0;
}
