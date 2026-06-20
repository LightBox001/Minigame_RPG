#pragma once


#include "Character.h"



class Enemy : public Character {
private:
  int goldReward = 20;
  int expReward = 20;
    
public:
  Enemy (
      std::string name, 
      int hp,
      int attackPower
      );

  void attack(Character& target);

  int heal(int healAmount);

  int getGoldReward() const;

  int getExpReward() const;


};
