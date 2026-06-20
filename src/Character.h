#pragma once 

#include <string>


class Character {
protected:
  std::string name;
  int fullHp;
  int hp;
  int attackPower;
  int damage;

public:
  Character(std::string nama, int hp, int attackPower);

  void attack(Character& target);

  void takeDamage(int damage);

  int heal(int healAmount);

  bool isAlive() const;

  int getHp() const;

  int getAttackPower() const;

  std::string getName() const;

};
