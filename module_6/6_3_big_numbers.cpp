#include <iostream>

int main() {
  std::cout << "Задача 3. Слишком большие числа.\n";

  int n = 0;
  int count = 0;

  std::cout << "Введите число \n";
  std::cin >> n;

  if (n == 0){
    count = 1;
  }

  while(n > 0){
    n = n/10;
    count++;
  }

  std::cout << "В этом числе " << count;
  if (count%10 == 1){
    std::cout << " цифра";
  } else if (count%10 == 0 || count%10 >= 5 || (count/10)%10 == 1){
     std::cout << " цифр";
  } else{
    std::cout << " цыфры";
  }
}
