#include <stdio.h>
#include <stdlib.h>

#include "Game.h"

/**
 * Your standard die. Six sides, numbered 1 to 6
 */
int d6() { // amount of dice to roll (default is 1)
  return (rand() % 6) + 1; // Add a new die result
}

/**
 * Your standard die. Six sides, numbered 1 to 6
 * Param : amount of dice to roll
 */
int nd6(int amount) { // amount of dice to roll (default is 1)
  if(amount <= 0) { return -1; } // Roll at least one die
  int value = 0;
  for (int i = 0; i < amount; i++ ){
    value += d6(); // Add a new die result to the total
  }
  return value;
}
void win(){
  exit(0);
}
void lose(){
  exit(0);
}
