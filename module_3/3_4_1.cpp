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

  int days = 0;
  std::cout << "Введите колличество дней: ";
  std::cin >> days;

  int DayHeight = startHeight + (growth*(days-1) + growth/2) - (losses*(days-1));

  std::cout << "Высота бамбука в середине " << days << " дня: " << DayHeight;
}
