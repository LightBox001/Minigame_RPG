#pragma once 

#include <string>
#include "Character.h"
#include "Enemy.h"

class Player : public Character {
private:
  int level;
  int exp;
  int gold;

public:
  Player(std::string name);
  
  void attack(Character& target);

  void attack(Character& target, int damage);

  void addExp(int amount);

  void addGold(int amount);

  int getLevel() const;

  int getExp() const;

  int getGold() const;

  int heal(int healAmount);

  void addGold(Enemy& enemy);
  

  void addExp(Enemy& enemy);   

  void tampilkanStats();


};
