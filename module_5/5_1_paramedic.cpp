#include <iostream>

int main() {
  std::cout << "Задача 1. Военный фельдшер.\n\n";

  int medicalAlcoholML = 0;
  std::cout << " Укажите колличество медицинского спирта (мл): ";
  std::cin >>  medicalAlcoholML;

  int firstAidKit = 0;
  std::cout << " Укажите колличество походных аптечек (шт): ";
  std::cin >>  firstAidKit;

  if((medicalAlcoholML >= 2000) || (firstAidKit >= 5)){
    std::cout << " У фельдшера достаточно снаряжения для выхода на работу с ранеными \n";
  } else {
    std::cout << " У фельдшера недостаточно снаряжения для выхода на работу с ранеными \n";
  }
}
