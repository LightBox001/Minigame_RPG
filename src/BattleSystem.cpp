#include "BattleSystem.h"
#include "util/util.h"
#include <iostream>
#include <random>


bool BattleSystem::startBattle(Player& player, Enemy& enemy) {

  std::cout << "===== Battle Start ====\n";   




  while (player.isAlive() && enemy.isAlive()) {
    int damage = player.getAttackPower();

    std::cout << player.getName() << " HP: " << player.getHp() << '\n';
    std::cout << enemy.getName() << " HP: " << enemy.getHp() << '\n';
    std::cout << '\n';

    std::cout << "1. Attack\n";
    std::cout << "2. Run\n";
    std::cout << '\n';


    while (true) {

      int choice = getIntInput("Choice: ");
      
      std::cout << '\n';

      if (choice == 1) {
        isCriticalHit();
        if (isCriticalHit()) {
          damage = damage * 2;
          std::cout << "Anda menyerang "<< enemy.getName() << ", damage CRITICAL HIT = " << damage << "\n";
        } else {
          std::cout << "Anda menyerang "<< enemy.getName() << ", damage = " << damage << "\n";
        }

        player.attack(enemy, damage);

        break;
      } else if (choice == 2) {
        std::cout << "Anda kabur" << std::endl;
        return false;
      } else {
        std::cout << "Pilihan anda tidak valid, masukkan sesuai pilihan di atas!" << std::endl;
        continue;
      }
      
    }

    if (!player.isAlive()) {
      break;
    }

    if (!enemy.isAlive()) {
      break;
    }




    enemy.attack(player);
    std::cout << enemy.getName() << " menyerang anda, damage = " << enemy.getAttackPower() << "\n\n";
  }

  if (!player.isAlive()) {
    std::cout << player.getName() << " HP: " << player.getHp() << '\n';
    std::cout << enemy.getName() << " HP: " << enemy.getHp() << '\n';

    std::cout << "\nAnda kalah\n";
    std::cout << "Anda harus mengulang game ini dari awal lagi" << std::endl;


    return player.isAlive();
  } else { 
      std::cout << "\nAnda menang\n";
      player.addExp(enemy.getExpReward());
      player.addGold(enemy.getGoldReward());

      std::cout << '\n';

      player.tampilkanStats();

      return player.isAlive();
  }
}




bool BattleSystem::isCriticalHit() {
  static std::random_device rd;
  static std::mt19937 gen(rd());

  std::uniform_int_distribution<> dist(1, 100);

  return dist(gen) <= 20;
}





