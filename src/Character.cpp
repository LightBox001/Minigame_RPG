#include "character.h"

Character::Character( 
  std::string name,
  int hp,
  int attackPower
  ) : name(name), hp(hp), fullHp(hp), attackPower(attackPower) 
{
}

void Character::takeDamage(int damage) {
  hp -= damage;
}

bool Character::isAlive() const {
  return hp > 0;
}

int Character::getHp() const {
  return hp;
}

int Character::getAttackPower() const {
  return attackPower;
}

std::string Character::getName() const {
  return name;
}



