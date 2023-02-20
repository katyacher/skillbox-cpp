#include <iostream>

int main() {
  std::cout << "Задача 4. Совпадение чисел(необязательная).\n";

  int a,b,c;
  std::cout << "Введите три числа: ";
  std::cin >> a >> b >> c;

  if ((a == b) & (b == c)){
    std::cout << "3 совпадающих\n";
  } else if ((a == b) || (b == c)|| (a == c)){
    std::cout << "2 совпадающих\n";
  } else {
    std::cout << "0 совпадающих\n";
  }
  
}
