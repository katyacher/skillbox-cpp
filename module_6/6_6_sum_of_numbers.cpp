#include <iostream>

int main() {
  std::cout << "Задача 6. Сумма чисел.\n";

  int i = 0;
  int n = 0;
  int sum = 0;

  std::cout << "Сколько числе нужно сложить?\n";
  std::cin >> i;

  while(i){
    std::cout << "Введите число:\n";
    std::cin >> n;
    sum += n;
    i--;
  }

  std::cout << "Сумма чисел равна: " << sum << "\n";
  return 0;
}
