#include <iostream>

int main() {
  std::cout << "Задача 2. Складываем в уме.\n";

  std::cout << "Введите число a: ";
  int a;
  std::cin >> a;
  
  std::cout << "Введите число b: ";
  int b;
  std::cin >> b;

  std::cout << "Сколько будет a + b? ";
  int sum = 0;
  std::cin >> sum;

  if (sum == a + b){
    std::cout << "Верно!\n";
  } else {
     std::cout << "Неверно, a + b = " << a + b;
  }

}
