#include <iostream>

int main() {
  std::cout << "Задача 1. Банкомат 4.0.\n";

  std::cout << "Введите число: \n";
  int n = 0;
  std::cin >> n;

  int result = 0;
  while(n!=0){
    result = result + n%10;
    n = n/10;
  }
  if(result == 42){
    std::cout << "Ввод корректный\n";
  } else {
    std::cout << "Ввод некорректный\n";
  }

}
