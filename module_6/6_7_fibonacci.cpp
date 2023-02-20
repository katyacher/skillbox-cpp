#include <iostream>

int main() {
  std::cout << "Задача 7. Числа Фибоначчи.\n";

  int a = 0;
  int b = 1;
  int n = 0;
  int max = 2147483647;
  bool incorrect = true;
  
  std::cout << "Какое по-сету число ряда Фибоначчи вым нужно?\n";

  while(incorrect){
    std::cin >> n;
    if (n > 0 && n < max){
      incorrect = false;
    } else {
      std::cout << "Введите положительное число от 1 до 2147483647:\n";
    }
  }
  
  while(n != 0){
    a = a + b;
    b = a - b;
    n--;
  }

  std::cout << a;
}

