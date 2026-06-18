#pragma once


#include "Character.h"



class Monster : public Character {
public:
  Monster (
      std::string name, 
      int hp,
      int attackPower
      );

  void attack(Character& target);

};
