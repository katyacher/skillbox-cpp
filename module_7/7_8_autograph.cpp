#include <iostream>

int main() {
  std::cout << "Задача 8. Автограф разработчика.\n";

  std::string name = "Ekaterina";

  int nameLangth = 9;
  int width = 13;
  int height = 3;

  for(int row = 0; row < height; row++){
    if (row == height/2) 
        std::cout << "| " << name << " |";
    else {
      for (int col = 0; col < width; col++){
        if (col == 0 || col == width - 1) 
          std::cout << "|";
        else if (row == 0 || row == height - 1)
          std::cout << "-";
        else 
         std::cout << " "; 
      }
    }    
    std::cout << "\n";
  }
}
