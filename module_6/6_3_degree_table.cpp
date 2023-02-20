#include <iostream>

int main() {
  std::cout << "Задача 3. Таблица степеней.\n";

  int K;
  std::cout << "Введите число \n";
  std::cin >> K;

  int N;
  std::cout << "Количество первых степеней числа \n";
  std::cin >> N;

  int i = 0;
  int result = 1;

  do{
    std::cout << result << " ";
    result = result*K;
    i++;
  }while(i < N);

  return 0;
}
