#include <iostream>

int main() {
  std::cout << "Задача 6. Степень двойки.\n";

  int k = 0;
  int n = 0;
  bool incorrect = true;

  do {
    std::cout << "Введите число от 0 до 2147483647 \n";
    std::cin >> k;

    if(k >= 0 && k <=2147483647){
      incorrect = false;
    }
  } while (incorrect);
  
  if(k == 0){
    std::cout << "Нет";
  }
  
  while (k > 1){
    if (k % 2 == 0){
      k/= 2;
      n++; 
    } else {
      std::cout << "Нет";
      break;
    }
  }

  if (k == 1){
    std::cout << "2 в " << n;
  }
}
