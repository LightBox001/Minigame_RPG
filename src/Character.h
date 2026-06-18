#pragma once 

#include <string>


class Character {
protected:
  std::string name;
  int hp;
  int attackPower;

public:
  Character(std::string nama, int hp, int attackPower);

  void attack(Character& target);

  void takeDamage(int damage);

  bool isAlive() const;

  int getHp() const;

  int getAttackPower() const;

  std::string getName() const;

};
