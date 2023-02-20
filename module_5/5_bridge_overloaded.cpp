#include <iostream>

int main() {
  std::cout << "Задача 2. Мост и перегрузка.\n\n ";

  
  std::cout << "Вес первой машины: ";
  int weightCar1 = 0;
  std::cin >> weightCar1;

  std::cout << "Вес второй машины: ";
  int weightCar2 = 0;
  std::cin >> weightCar2;

  std::cout << "Вес третьей машины: ";
  int weightCar3 = 0;
  std::cin >> weightCar3;

  std::cout << "Вес четвертой машины: ";
  int weightCar4 = 0;
  std::cin >> weightCar4;

  if (weightCar1 > 1200 || weightCar2 > 1200 ||weightCar3 > 1200 ||weightCar4 > 1200){
    std::cout << "Перегрузка. Одна из машин превышает вес 1200 кг.\n ";
  } else{
    std::cout << "Все в порядке, проезжайте.\n ";
  }

}
