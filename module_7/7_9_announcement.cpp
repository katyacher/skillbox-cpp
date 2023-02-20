#include <iostream>

int main() {

  std::cout << "Задача 9. Важные объявления.\n";

  int signs, width = 0;
  bool incorrect = true;
  
  while(incorrect){
    std::cout << "Задайте длину колонтитула: ";
    std::cin >> width;
    std::cout << "Задайте количество восклицательных знаков (не более длины колонтитула): ";
    std::cin >> signs;

    if (width == 0)
      std::cout << "Длина колонтитула не может быть нулевой.\n";
    else if (width < 0)
      std::cout << "Длина колонтитула не может быть отрицательной.\n"; 
    else if (signs < 0)
      std::cout << "Колличество восклицательных знаков не может быть отрицательным.\n";
    else if (signs >= width)
      std::cout << "Количество восклицательных знаков не может быть больше длины колонтитула.\n";
    else 
      incorrect = false;
  }
  
  for (int i = 0; i < width; i++) {
    int correction = 0;
    if (signs % 2 == 0)
      correction = 1;

    if (i >= width/2 - signs/2 && i <= width/2 + signs/2 - correction)
      std::cout << "!";
    else
      std::cout << "~";
  }
  std::cout << "\n";
}
