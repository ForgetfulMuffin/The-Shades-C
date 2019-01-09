#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

#include "Game.h"
#include "Interaction.h"
#include "Player.h"
#include "labGen/labGen.h"
void parseChar(){
  int key = getch();
  switch(key){
  case 97 : // a
    printf("[a]ttack\n");
    break;
  case 104: // h
    printf("[h]elp\n");
    break;
  case 113: // q
    clear();
    endwin();
    printf("[q]uit\n");
    exit(0);
    break;
  case 258 : // down arrow
    switch(isWallSouth()){
    case 0 :
      printf("You can't go this way !");
      break;
    case 1 :
      movePlayerDown();
      break;
    case 2 :
      win();
      break;
    }
    break;
  case 259 : // up arrow
    switch(isWallSouth()){
    case 0 :
      printf("You can't go this way !");
      break;
    case 1 :
      movePlayerUp();
      break;
    }
    break;
  case 260 : // left arrow
    switch(isWallWest()){
    case 0 :
      printf("You can't go this way !");
      break;
    case 1 :
      movePlayerDown();
      break;
    }
    break;
  case 261 : // right arrow
    switch(isWallSouth()){
    case 0 :
      printf("You can't go this way !");
      break;
    case 1 :
      movePlayerRight();
      break;
    case 2 :
      win();
      break;
    }
    break;
  default :
    printf("keystroke : %d\n", key);
    break;
  }
}
