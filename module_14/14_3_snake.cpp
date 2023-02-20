#include <iostream>

int main() {
  std::cout << "Задача 3. Проход змейкой"<< std::endl;

  int arr[5][5];
  int size = 5;
  int num = 0;
  
  for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
          arr[i][abs(j-4*(i%2))] = num;
          num++;
      }   
  }

  for(int i = 0; i < size; i++){
      for(int j = 0; j < size; j++){
          std::cout << arr[i][j]<< " ";
      }   
    std::cout << "\n";
  }
  
} 
