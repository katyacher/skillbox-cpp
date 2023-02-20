#include <iostream>

int main() {
  std::cout << "Задача 4. Напоминалка.\n";

  std::string reminder;
  std::cout << "О чем вам напомнить?\n";
  std::getline(std::cin,reminder);
  //std::cin.ignore();

  int i = 0;
  std::cout << "Сколько раз вам напомнить?\n";
  std::cin >> i;

  while(i){
     std::cout << reminder << "\n";
     i--;
  }
  return 0;
}
