#include "Monster.h"


Monster::Monster (std::string name, int hp, int attackPower) 
  : Character(name, hp, attackPower) {

  }

void Monster::attack(Character& target) {
  target.takeDamage(attackPower);
}


