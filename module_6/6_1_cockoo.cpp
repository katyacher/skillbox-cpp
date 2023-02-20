#include <iostream>

int main() {
  std::cout << "Задача 1. Кукушка.\n";

  int hour = 0;
  bool incorrect = true;

  std::cout << "Который час?\n";
  
  while(incorrect){
    std::cin >> hour;
    if (hour > 0 && hour <= 12){
      incorrect = false;
    } else {
      std::cout << "Введите число от 1 до 12:\n";
    }
  }

  while(hour != 0){
    std::cout << "Ку-ку\n";
    hour--;
  }
}
