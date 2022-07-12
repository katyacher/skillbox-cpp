#include <iostream>

int main() {
  std::cout << "Задача 7. Меню ресторана.\n";

  std::string baseMenu = "cуп";
  std::string menu1 = "салат";
  std::string menu2 = "пицца";
  std::string menu3 = "суши";
  std::string menu4 = "котлета";
  std::string menu5 = "сосиска";
  std::string menu6 = "запеканка";
  std::string menu7 = "мороженое";

  std::cout << "Какой день недели (номер от 1 до 7)?: ";
  int dayOfWeak = 0;
  std::cin >> dayOfWeak;

  if (dayOfWeak == 1){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu1 << ".\n";
  } else if (dayOfWeak == 2){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu2 << ".\n";
  }  else if (dayOfWeak == 3){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu3 << ".\n";
  }  else if (dayOfWeak == 4){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu4 << ".\n";
  }  else if (dayOfWeak == 5){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu5 << ".\n";
  }  else if (dayOfWeak == 6){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu6 << ".\n";
  }  else if (dayOfWeak == 7){
    std::cout << "Cегодня в меню " << baseMenu << " и " << menu7 << ".\n";
  } 
}
