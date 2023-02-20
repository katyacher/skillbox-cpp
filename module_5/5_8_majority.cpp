#include <iostream>

int main() {
  std::cout << "Задача 8. Грустное совершеннолетие.\n";

  int nowDay = 0;
  int nowMonth = 0;
  int nowYear = 0;
  std::cout << " Введите сегодняшнюю дату (D/M/Y):\n";
  std::cin >> nowDay >> nowMonth >> nowYear;

  int birthDay = 0;
  int birthMonth = 0;
  int birthYear = 0;
  std::cout << " Ваша дата рождения (D/M/Y):\n";
  std::cin >> birthDay >> birthMonth >> birthYear;

  if (nowYear - birthYear < 18){
    std::cout << "Нельзя\n";
  } else if (nowYear - birthYear > 18){
    std::cout << "Можно\n";
  } else if (nowMonth > birthMonth || (nowMonth == birthMonth && nowDay > birthDay)){
    std::cout << "Можно\n";
  } else {
    std::cout << "Нельзя\n";
  } 
}

