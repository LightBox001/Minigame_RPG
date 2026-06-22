#pragma once
#include "Player.h"
#include "Enemy.h"

class Dungeon {
private:
  int currentFloor = 1;

  // Player player;
  //
  // Enemy enemy;

public:
  bool explore(Player& player);

  int getCurrentFloor();

  int randomEvent();

};
