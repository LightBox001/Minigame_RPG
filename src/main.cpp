#include "Player.h"
#include "Monster.h"
#include <iostream>
#include <string>


int main() {
   Player player1("michael");

   Monster golem("Golem", 200, 20);

   player1.attack(golem);

   std::cout << "Attack " << player1.getName() << " : " << player1.getAttackPower() << '\n';
   // std::cout <<  
   //

   std::cout << "HP golem sekarang: " << golem.getHp() << '\n';

   return 0;
}
