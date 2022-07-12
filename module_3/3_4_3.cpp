#include <iostream>

int main() {
  std::cout << "Задача 4. Злостные вредители\n";

  int startHeight = 0;
  std::cout << "Введите высоту саженца (в см): ";
  std::cin >> startHeight;
  
  int growth = 0;
  std::cout << "Введите скорость роста бамбука (в см): ";
  std::cin >> growth;

  int losses = 0;
  std::cout << "Введите скорость поедания бамбука гусеницами (в см): ";
  std::cin >> losses;

  int finishHeight = 0;
  std::cout << "Введите высоту бамбука для сбора (в см): ";
  std::cin >> finishHeight;

  int days = (finishHeight - startHeight)/(growth - losses);

  std::cout << "Ваш бамбук можно срубить и продать на " << days << " день.\n";
}
