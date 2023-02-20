#include <iostream>

int main() {
  std::cout << "Задача 6. Рамка.\n";

  int width = 0;
  int height = 0;

  std::cout << "Введите ширину и высоту рамки. \n";
  std::cin >> width >> height;

  for(int i = 0; i < height; i++){
    std::cout << "|";
    for (int j = 1; j < width - 1; j++){
      if (i == 0 || i == height - 1){
        std::cout << "-";
      } else {
        std::cout << " ";
      }
    }
    std::cout << "|";
    std::cout << "\n";
  }
}
