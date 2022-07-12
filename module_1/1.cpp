#include <iostream>

int main() {
  std::cout << "Задача 1. Начальник.\n\n";

  std::string answer;

  do{
    std::cout << "А вы выполнили те задания, которые я выдавал вчера?\n";
    std::getline(std::cin, answer);
    std::cin.ignore();
  } while (answer == "Да");// сравнение не корректно работает

}
