#include "Player.h"
#include "Enemy.h"
#include "BattleSystem.h"
#include <iostream>
#include <string>


int main() {
  Player player1("Michael");

  Enemy golem("Golem", 200, 20);

  player1.tampilkanStats();


  std::cout << "Game dimulai\n" << std::endl;
  BattleSystem::startBattle(player1, golem);






   return 0;
}
