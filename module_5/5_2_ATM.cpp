#include <iostream>

int main() {
  std::cout << "Задача 2. Банкомат.\n";

  int cash = 0;
  std::cout << "Введите сумму для снятия: ";
  std::cin >> cash;

  if (cash > 100000){
    std::cout << "Извините, банкомат может выдать сумму до 100000 рублей.\n";
  } else {
     std::cout << "Заберите деньги, затем заберите карту.\n";
  }
}
