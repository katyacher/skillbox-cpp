#include <iostream>

int main() {
  std::cout << "Задача 3. Таблица умножения.\n";
  int n = 0;

  std::cout << "Для какого числа нужно вывести таблицу умножения?\n";
  std::cin >> n;

  for(int i = 0; i < 10; i++){
    std::cout << n << " x " << i << " = " << n*i << "\n";
  }
}
