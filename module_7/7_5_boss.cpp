#include <iostream>

int main() {
  std::cout << "Задача 5. Начальник (цикл for).\n";
  int i = 1;
  std::string answer;

  for(; i > 0; i++){
    std::cout << "А ты выполнил то задание, которое я выдавал вчера?\n";
    std::getline(std::cin, answer);
    
    if (answer == "Да, конечно, сделал"){
      break;
    }
  }
  if(i > 1){
    std::cout << "Ну почему тебя нужно спрашивать " << i << " раз?\n";
  }

}
