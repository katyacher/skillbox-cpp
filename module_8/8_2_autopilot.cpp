#include <iostream>

int main() {
  std::cout << "Задача 2. Автопилот\n";

  float distance, angle;

  std::cout << "Введите угол тангажа в градусах: ";
  std::cin >> angle;

  angle/=57.296;

  if(angle > -0.28 && angle < 0.28){
    std::cout << "Угол " << angle << "безопасен\n";
  } else {
    std::cout << angle << " Угол небезопасен!\n";
  }
}
