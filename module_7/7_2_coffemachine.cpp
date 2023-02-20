#include <iostream>

int main() {
  std::cout << "Задача 2. Кофемашина.\n";

  int watter = 0;
  int milk = 0;
  int choose = 0; // 1- americano, 2 - latte

  for(;;){
    std::cout << "Добро пожаловать! :)\n";

    int incorrect = true;

    while(incorrect){
      std::cout << "Сколько милилитров воды залито в машину?\n";
      std::cin >> watter;
      if (watter >= 0){
        incorrect = false;
      } else {
        std::cout << "Извините, колличество жидкости не может быть отрицательным числом.\n";
      }
    }

    incorrect = true;

    while(incorrect){
      std::cout << "Сколько милилитров молока залито в машину?\n";
      std::cin >> milk;
      if (milk >= 0){
        incorrect = false;
      } else {
        std::cout << "Извините, колличество жидкости не может быть отрицательным числом.\n";
      }
    }

    incorrect = true;

    while(incorrect){
      std::cout << "Какой напиток вам приготовить?\n";
      std::cout << "Если вы хотите Американо - нажмите 1\n";
      std::cout << "Если вы хотите Латте - нажмите 2\n";
      std::cin >> choose;
      if (choose == 1 || choose == 2){
        incorrect = false;
      } else {
        std::cout << "Извините, ваш ответ должен быть числом 1 или 2.\n";
      }
    }

    if(choose == 1){
      if(watter >= 300){
        watter-=300;
        std::cout << "Ваш напиток готов\n";
      } else {
        std::cout << "Не хватает воды\n";
      }
    } else if(choose == 2){
      if (watter >= 30 && milk >= 270){
        watter-=30;
        milk-=270;
        std::cout << "Ваш напиток готов\n";
      } else if(watter < 30){
        std::cout << "Не хватает воды\n";
      } else if (milk < 270){
        std::cout << "Не хватает молока\n";
      } 
    }
  }
}
