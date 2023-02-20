#include <iostream>

int main() {
  std::cout << "Задача 1. Инопланетная пища.\n";

  int food = 100; // 100 кг гречки
  int month = 1;

  for(;food >= 0; food-=4){
    std::cout << "В " << month << " месяце у вас будет " << food << " кг гречки\n";
    month++;
  }
  
}
