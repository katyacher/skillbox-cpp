#include <iostream>

int main() {
  std::cout << "Задача 3. Майские!\n\n";

  int day = 0;
  std::cout << " Введите номер дня: ";
  std::cin >> day;

  if(((day>=1)&(day<=5))||((day>=8)&(day<=10))||(day%7 == 0)||(day%7 == 6)){
    std::cout << "Выходной день\n";
  }else {
    std::cout << "Рабочий день\n";
  }
}
