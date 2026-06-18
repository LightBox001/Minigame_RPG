#pragma once 

#include <string>
#include "Character.h"

class Player : public Character {
private:
  int level;
  int exp;

public:
  Player(std::string name);
  
  void attack(Character& target);

  void addExp(int amount);

  int getLevel() const;

  int getExp() const;
  


};
// class Player 
