#include <stdio.h>
#include "Interaction.h"
#include "Player.h"
void parseChar(){
  int key = getch();
  switch(key){
  case 97 : // a
    printf("[a]ttack\n");
    break;
  case 104: // h
    printf("[h]elp\n");
    break;
  case 258 : // down arrow
    printf("south\n");
    movePlayerDown();
    printf("Bob is at coords (%d,%d)\n", thePlayer.position[0], thePlayer.position[1]); 
    break;
  case 259 : // up arrow
    printf("north\n");
    movePlayerUp();
    printf("Bob is at coords (%d,%d)\n", thePlayer.position[0], thePlayer.position[1]); 
    break;
  case 260 : // left arrow
    printf("west\n");
    movePlayerLeft();
    printf("Bob is at coords (%d,%d)\n", thePlayer.position[0], thePlayer.position[1]); 
    break;
  case 261 : // right arrow
    printf("east\n");
    movePlayerRight();
    printf("Bob is at coords (%d,%d)\n", thePlayer.position[0], thePlayer.position[1]);
    break;
  default :
    printf("keystroke : %d\n", key);
    break;
  }
}
