#include <iostream>

int main() {
  std::cout << "Задача 1. Минимум из двух чисел.\n";

  std::cout << "Введите первое число: ";
  int a;
  std::cin >> a;
  
  std::cout << "Введите второе число: ";
  int b;
  std::cin >> b;

  if (a == b){
    std::cout << " Числа равны. \n";
  } else if( a > b){
    std::cout << "<Большее из чисел: " << a;
  } else{
    std::cout << "<Большее из чисел: " << b;
  }
  
}
