#pragma once
#include "Player.h"
#include "Enemy.h"


class BattleSystem {
private:
  static bool tryRun();

  static bool isCriticalHit();



public:
  static bool startBattle(
        Player& player,
        Enemy& enemy
      );


  
};
