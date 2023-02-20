#include <iostream>

int main() {
  std::cout << "Задача 3. Метеостанция\n";
  int minC = 0;
  int maxC = 0;
  int stepC = 0;

  std::cout << "Нижняя граница: ";
  std::cin >> minC;
  std::cout << "Верхняя граница: ";
  std::cin >> maxC;
  std::cout << "Шаг: ";
  std::cin >> stepC;

  if (minC < 0  || maxC < 0 || stepC < 0){
    std::cout << "Ошибка: числа должны быть положительными\n";
  } else {
    std::cout << "C " << " F \n";
    float F = minC + 32.0f;
    for (int i = minC; i <= maxC; i+= stepC){
      std::cout << i << " " << F << "\n";
      F+= 1.8*stepC;
    }
  }
}
