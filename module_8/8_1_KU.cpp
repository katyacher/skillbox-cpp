#include <iostream>

int main() {
  std::cout << "Задача 1. Ку!\n";

  int chaptls, gravizapa = 0;
  std::cout << "Сколько у вас чаптолов? ";
  std::cin >> chaptls;

  float kc = (float) chaptls/4400;
  std::cout << "У вас " << kc << " кц \n";

  for ( ;gravizapa >= 0; gravizapa++){
    if(kc < 0.5f){
      break;
    }
    kc -= 0.5f;
  }
  std::cout << "Вы можете купить гравицап: " << gravizapa << "\n";

}
