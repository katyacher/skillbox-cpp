#include <iostream>

int main() {
  std::cout << "Задача 4. Красный Марс.\n";

  int length = 15;
  int width = 20;
  std::string command;

  int marsRoverL = length/2; // позиция марсахода относительно стороны length
  int marsRroverW = width/2; // позиция марсахода относительно стороны width

  std::cout << "Добро пожаловать! Для передвижения марсахода используйте следующие клавиши: \n";
  std::cout << "w - вверх, s - вниз, a - влево , d - вправо\n";

  for(;;){
    std::cout << "Марсоход находится на позиции " << marsRoverL << ", "<< marsRroverW << ", введите команду:\n";
    std::cin >> command;

    if (command == "w" && marsRoverL < length){
      marsRoverL++;
    } else if (command == "s" && marsRoverL > 0){
      marsRoverL--;
    } else  if (command == "a" && marsRroverW > 0){
      marsRroverW--;
    } else if (command == "d" && marsRroverW < width){
      marsRroverW++;
    } else {
      std::cout << "Ошибка: неизвестная комманда.\n";
    }
  } 
}
