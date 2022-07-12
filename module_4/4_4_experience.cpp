#include <iostream>

int main() {
  std::cout << "Задача 4. Калькулятор опыта.\n";
  
  std::cout << "Введите количество очков опыта: ";    
  int experiencePoints = 0;
  std::cin >> experiencePoints;

  if (experiencePoints >= 1000){
    std::cout << "Ваш уровень: 2.\n";    
  } else if (experiencePoints >= 2500){
    std::cout << "Ваш уровень: 3.\n";
  } else if (experiencePoints >= 5000){
    std::cout << "Ваш уровень: 4.\n";
  } else {
    std::cout << "Ваш уровень: 1.\n";  
  }
}
