#include <iostream>

int main() {
  std::cout << "Задача 5. Кратность числа.\n";

  std::cout << "Введите число a: ";
  int a;
  std::cin >> a;
  
  std::cout << "Введите число b: ";
  int b;
  std::cin >> b;

  if (a%b == 0){
    std::cout << "Число " << a << " делится на число " << b << " без остатка. \n";
  } else {
    std::cout << "Число " << a << " не делится на число " << b << " без остатка. \n";
  }
}
