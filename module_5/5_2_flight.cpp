#include <iostream>

int main() {
  std::cout << "Задача 2. Полет нормальный!\n\n";

  int speed = 0;
  std::cout << "Введите скорость самолета (км/ч): ";
  std::cin >> speed;

  int height = 0;
  std::cout << "Введите высоту полета (м): ";
  std::cin >> height;

  if(((speed >= 750) && (speed < 850)) && ((height >= 9000) && (height < 9500))){
    std::cout << "Самолет летит в правильным эшелоном\n ";
  } else{
    std::cout << "Самолет летит в другом эшелоне\n ";
  }
}
