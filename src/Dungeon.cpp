#include "Dungeon.h"

#include "BattleSystem.h"
#include "Player.h"
#include "Enemy.h"
#include <random>
#include <iostream>

int Dungeon::currentFloor = 0;



void Dungeon::explore(Player& player) {

  std::cout << "FLoor: " << getCurrentFloor() << std::endl;

  if (currentFloor == 5 ) {
    std::cout << "Dragon ditemukan" << std::endl;

    Enemy dragon("Dragon", 400, 30);
    if (BattleSystem::startBattle(player, dragon)) {
      
      std::cout << "=== END ===" << std::endl;

      return;


    }
  }

  int event = randomEvent();

  if (event <= 60) {
    if (event <= 20) {
      std::cout << "Enemy ditemukan" << std::endl;

      Enemy golem("Golem", 200, 15);

      if (BattleSystem::startBattle(player, golem)) {
       std::cout << "floor ++" << std::endl;
       currentFloor += 1;
     }
      
    } else {

      std::cout << "Enemy ditemukan!" << std::endl;

      Enemy giant("Giant", 150, 10);

      if (BattleSystem::startBattle(player, giant)) {
       std::cout << "floor ++" << std::endl;
       currentFloor += 1;
     }

    }

  } else if (event <= 80) {
    std::cout << "Harta Karun ditemukan!" << std::endl;

    int gold = 500;

    player.addGold(gold);

    std::cout << "Gold: +" << gold << std::endl;

  } else {
    std::cout << "Rest Area Ditemukan!" << std::endl;

    int heal = 60;
    player.heal(heal);

    std::cout << "HP +" << heal << std::endl;
  }


}

int Dungeon::getCurrentFloor() {
  return currentFloor;
}

int Dungeon::randomEvent() {
  static std::random_device rd;
  static std::mt19937 gen(rd());

  std::uniform_int_distribution<> dist(1, 100);

  return dist(gen);
}



