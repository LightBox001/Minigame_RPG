#pragma once
#include "Player.h"
#include "Enemy.h"

class Dungeon {
private:
  static int currentFloor;

  Player player;
  //
  // Enemy enemy;

public:

  static void explore(Player& player);

  static int getCurrentFloor();

  static int randomEvent();

};
