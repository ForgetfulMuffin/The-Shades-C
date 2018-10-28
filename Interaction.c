#include <stdio.h>
#include "Interaction.h"

void parseChar(){
  int key = getch();
  switch(key){
  case 258 :
  case 259 :
  case 260 :
  case 261 :
    printf("Movement\n");
    break;
  default :
    printf("keystroke : %d\n", key);
    break;
	}
}
