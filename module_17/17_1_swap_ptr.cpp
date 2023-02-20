#include <iostream>

void swap_ptr(int* a, int* b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  std::cout << "17.1 Написать функцию, принимающую два указателя на int ";
  std::cout << "и меняет местами содержимое данных указателей." << std::endl;

  int a = 10;
  int b = 20;

  swap_ptr(&a, &b);

  std::cout << a << " " << b;
  
}
