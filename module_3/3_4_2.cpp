#include <iostream>

int main() {
  std::cout << "Задача 4. Злостные вредители\n";

  int startHeight = 100;
  int growth = 50;
  int losses = 20;

  int ThirdDayHeight = startHeight + (growth*2 + growth/2) - (losses*2);

   std::cout << "Высота бамбука в середине третьего дня: " << ThirdDayHeight;

}
