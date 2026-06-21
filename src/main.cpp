#include "Player.h"
// #include "Enemy.h"
// #include "BattleSystem.h"
#include "Dungeon.h"
#include "util/util.h"

#include <iostream>
#include <string>


int main() {
  bool isKeluar = false;


  Player player1("Michael");

  player1.tampilkanStats();
  std::cout << "Game dimulai" << std::endl;

  while (true) {
    std::cout << "\n" << std::endl;
    std::cout << "1. Explore"<< std::endl;
    std::cout << "2. Player Statistik" << std::endl;
    std::cout << "3. Shop" << std::endl;
    std::cout << "4. Keluar" << std::endl;


    while (true) {

      int choice = getIntInput("Choice: ");

      std::cout << '\n';

      if (choice == 1) {
        Dungeon::explore(player1);

        while (true) {
          int kembali = getIntInput("Tekan 1 untuk Kembali: ");
          if (kembali == 1) {
            break;

          } else {
            std::cout << "Input anda tidak valid, tekan 1 untuk kembali: " << std::endl;
            continue;
          }

        }

        break;


      } else if (choice == 2) {
        player1.tampilkanStats();

        while (true) {
          int kembali = getIntInput("Tekan 1 untuk Kembali: ");
          if (kembali == 1) {
            break;

          } else {
            std::cout << "Input anda tidak valid, tekan 1 untuk kembali: " << std::endl;
            continue;
          }

        }
        break;

      } else if (choice == 3) {

        std::cout << "Shop belum tersedia" << std::endl;
        break;

      } else if (choice == 4) {
        isKeluar = true;
        
        break;
      
      } else {

        std::cout << "Pilihan anda tidak valid, masukkan sesuai pilihan di atas" << std::endl;
        continue;
      }

    }
    
   if (isKeluar) {
    break;
   } 
  }

   return 0;
}


