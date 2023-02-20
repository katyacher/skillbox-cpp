#include <iostream>

int main() {
  std::cout << "Задача 10. Угадай число - наоборот.\n";

  int n = 63;
  int m = 0;
  int part = 2;
  std::string answer;
  std::cout << "Загадайте число от 0 до 63\n";

  while (m != n){
    std::cout << "Это число больше " << n/part << "?\n";
    std::cin >> answer;
    if (answer == "Да"){
      m = n/part;
      part *= part;
      
    } else {
      n = n/part;
    }
  }
  std::cout <<  m << " " << n;
  std::cout << "Вы загадали число " << n << "\n";
};
