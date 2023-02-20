#include <iostream>

int main() {
  std::cout << "Задача 3. Високосный год (необязательная). \n";

  int year = 0;
  std::cout << "Введите год: ";
  std::cin >>year;

  if (year % 100 == 0){
    if (year % 400 == 0){
      std::cout << "Високосный год. В этом году 366 дней.\n";
    } else {
      std::cout << "В этом году 365 дней.\n";
    }
  } else if (year % 4 == 0){
    std::cout << "Високосный год. В этом году 366 дней.\n";
  } else {
    std::cout << "В этом году 365 дней.\n";
  }
}
