#include <iostream>

int main() {
  std::cout << "Задача 2. Сумма чисел (цикл for).\n";

  int i = 0;
  int n = 0;
  int sum = 0;

  std::cout << "Сколько числе нужно сложить?\n";
  std::cin >> i;

  for(;i > 0;i--){
    std::cout << "Введите число:\n";
    std::cin >> n;
    sum += n;
  }

  std::cout << "Сумма чисел равна: " << sum << "\n";
  return 0;
}
