#include "util.h"

#include <string>
#include <iostream>
#include <limits>


int getIntInput(const std::string& prompt) {
  int choice;

  while (true) {
    std::cout << prompt;

    if (std::cin >> choice) {

      return choice;
    }

      std::cout << "Input harus berupa angka!" << std::endl;

      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
} 
