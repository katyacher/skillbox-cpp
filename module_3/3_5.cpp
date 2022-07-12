#include <iostream>

int main() {
  std::cout << "Задача 3.5 Обмен местами \n";

  int a = 42;
  int b = 153;
  
  a = a + b;
  b = a - b;
  a = a - b;

  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";

}
