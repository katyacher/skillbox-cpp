#include <iostream>

int main() {
  std::cout << "Задача 10. Угадай число - наоборот.\n";

  int min = 0;
  int max = 63;
  int middle = (min + max)/2;
  int n = 0;
  bool found = true;
  std::string answer;

  std::cout << "Загадайте число от " << min << " до " << max << "\n";

  while (found){
    std::cout << "Загаданное число это " << middle << "? (y/n)\n";
    std::cin >> answer;

    if (answer == "y"){
      std::cout << "Вы загадали число \"" << middle << "\".\n";
      found = false;
    } else {
      std::cout << "Загаданное число больше " << middle << "? (y/n)\n";
      std::cin >> answer;

      if (answer == "y"){
        min = middle;
      } else {
        max = middle;
      }

      if (max - min < 2) {
      std::cout << "Вы загадали число \"" << middle << "\".\n";
      found = false;
      }
      middle = (min + max) / 2;
    }
  }

}
