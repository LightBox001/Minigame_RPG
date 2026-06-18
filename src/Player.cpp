#include "Player.h"
#include <ratio>


Player::Player(std::string nama)
  : Character(nama, 100, 15),
    level(1),
    exp(0)
{

}

void Player::attack(Character& target) {
  target.takeDamage(attackPower);
}

void Player::addExp(int amount) {
  exp += amount;
}

int Player::getExp() const {
  return exp;
}

int Player::getLevel() const {
  return level;
}
