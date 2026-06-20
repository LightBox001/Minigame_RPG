#include "Enemy.h"


Enemy::Enemy (std::string name, int hp, int attackPower) 
  : Character(name, hp, attackPower) {

  }

void Enemy::attack(Character& target) {
  target.takeDamage(attackPower);
}

int Enemy::heal(int healAmount) {
  hp += healAmount;
  if (hp > fullHp) {
    hp = fullHp;
  }
  return hp;
}

int Enemy::getGoldReward() const{
  return goldReward;
}

int Enemy::getExpReward() const {
  return expReward;
}




