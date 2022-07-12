#include <iostream>

int main() {
  std::cout << "Задача 3. Проверка на чётное число.\n";

  std::cout << "Введите число: ";
  int x = 0;
  std::cin >> x;

  if (x%2==0){
    std::cout << "Ваше число четное.\n";
  } else {
     std::cout << "Ваше число нечетное.\n";
  }
}
