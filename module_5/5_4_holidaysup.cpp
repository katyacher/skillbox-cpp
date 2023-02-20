#include <iostream>

int main() {
  std::cout << "Задача 4. Майские — усложнение.\n\n";

  int numberOfday = 0;
  std::cout << " Введите номер дня недели(от 1 до 7), с которого начинается месяц: ";
  std::cin >> numberOfday;

  if ((numberOfday < 1) || (numberOfday > 7)){
    std::cout << " Ошибка. Введите номер дня недели(от 1 до 7), с которого начинается месяц еще раз: ";
    std::cin >> numberOfday;
  }

  int day = 0;
  std::cout << " Введите номер дня: ";
  std::cin >> day;

  if(((day>=1)&(day<=5))||((day>=8)&(day<=10))||((day+numberOfday-1)%7 == 0)||((day+numberOfday-1)%7 == 6)){
    std::cout << "Выходной день\n";
  }else {
    std::cout << "Рабочий день\n";
  }
}
