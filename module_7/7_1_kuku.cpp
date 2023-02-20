#include <iostream>

int main() {
  std::cout << "Задача 1. Кукушка (цикл for).\n";
  
  int hour = 0;
 
  std::cout << "Который час?\n";
  std::cin >> hour;

  if (hour > 0 && hour <= 12){
    for(hour; hour > 0; hour--){
    std::cout << "Ку-ку\n";
  }
  } else {
    std::cout << "Введите число от 1 до 12:\n";
  }

}
