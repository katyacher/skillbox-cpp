#include <iostream>

int main() {
  std::cout << "Задача 3. Модуль числа.\n";

  std::cout << "Введите число: ";
  int x = 0;
  std::cin >> x;

  if (x < 0){
    x = - x;
  }
  std::cout << " Модуль числа: " << x;

}
