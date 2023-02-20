#include <iostream>

int main() {
  std::cout << "Задача 10. Ёлочка.\n";

  int height;
  bool incorrect = true;

  while (incorrect){
    std::cout << "Введите высоту ёлочки: ";
    std::cin >> height;

    if (height <= 0) 
      std::cout << "Высота ёлочки должна быть положительным числом.\n";
    else 
      incorrect = false;
  }
  
  int width = 2 * height - 1;// ширина основания 
  int halfWidth = width / 2; // центр, расположение вершины

  for (int row = 1; row <= height; row++) {// столбцы
    int spaces = (2 * row - 1); // колличество пробеллов в строке
    for (int col = 0; col < width; col++) { // строки
      if (col < halfWidth - spaces/2 || col > halfWidth + spaces/2)
        std::cout << " ";
      else
        std::cout << "#";
    }
    std::cout << "\n";
  }
  
}
