#include <iostream>

int main() {
  std::cout << "Задача 9. Прогрессивный налог (необязательная).\n\n";

  std::cout << "Введите размер прибыли: ";
  int profit = 0;
  std::cin >> profit;

  if (profit >= 50000){
    int tax = 30 * (profit - 50000)/100 + 20 * (50000-10000)/100 + 13 * 10000/100;
    std::cout << "Размер налога на сумму свыше 50000: " << tax << "\n";
  } else if (profit >= 10000){
    int tax =  20 * (profit-10000)/100 + 13 * 10000/100;
    std::cout << "Размер налога на сумму свыше 10000: " << tax << "\n";
  } else if (profit > 0){
    int tax =   13 * profit/100;
    std::cout << "Размер налога на сумму свыше 10000: " << tax << "\n";
  } else if (profit == 0){
    std::cout << "Налог не начислен.\n";
  } else {
    std::cout << "Ошибка ввода. Введите неотрицательное число.\n";
  }

}
