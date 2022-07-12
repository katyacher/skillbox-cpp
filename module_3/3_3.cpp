#include <iostream>

int main() {
  std::cout << "Задача 3. Обмен местами \n";

  int a = 42;
  int b = 153;
  int temp = 0;

  temp = a;
  a = b;
  b = temp;

  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";

}
