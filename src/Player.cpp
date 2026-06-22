#include "Player.h"
#include <iostream>


Player::Player(std::string nama)
  : Character(nama, 100, 45),
    level(1),
    exp(0),
    gold(0)
{

}

void Player::attack(Character& target) {
  target.takeDamage(attackPower);
}

void Player::attack(Character& target, int damage) {
  target.takeDamage(damage);
}

void Player::addExp(int amount) {
  exp += amount;
}

void Player::addGold(int amount) {
  gold += amount;
}

int Player::getExp() const {
  return exp;
}

int Player::getLevel() const {
  return level;
}

int Player::getGold() const {
  return gold;
}

int Player::heal(int HealAmount) {
  hp += HealAmount;
  if (hp > fullHp) {
    hp = fullHp;
  }
  return hp;
}

void Player::addGold(Enemy& enemy) {
  gold += enemy.getGoldReward();
  std::cout << "Anda mendapat gold: " << enemy.getGoldReward() << std::endl;
}

void Player::addExp(Enemy& enemy) {
  exp += enemy.getExpReward();
  std::cout << "Anda mendapat exp: " << enemy.getExpReward() << std::endl;;
}

void Player::tampilkanStats() {
  std::cout << "===Data Player===" << std::endl;
  std::cout << "Attack Power: " << getAttackPower() << std::endl;
  std::cout << "HP: " << getHp() << std::endl;
  std::cout << "Exp: " << getExp() << std::endl;
  std::cout << "Gold: " << getGold()  << std::endl;
}
