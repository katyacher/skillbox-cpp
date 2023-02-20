#include <iostream>
#include <cmath>

int main() {
  std::cout << "Задача 3. Лифт\n";

  float H;
  std::cout << "Высота пола остановившейся кабины лифта над уровнем земли: ";
  std::cin >> H;

  if(H > 0){
    std:: cout << "Номер этажа: " << round(H/3.975)+1;
  } else {
     std:: cout << "Ошибка"; 
  }
}
