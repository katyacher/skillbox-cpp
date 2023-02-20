#include <iostream>

int main() {
  std::cout << "Задача 2. Кофемашина.\n";

  int water = 0;
  int milk = 0;
  int choose = 0; // 1- americano, 2 - latte
  int americano = 0; // колличество приготовленных напитков
  int latte = 0;// колличество приготовленных напитков


  std::cout << "Добро пожаловать! \n";

  int incorrect = true;

  while(incorrect){
    std::cout << "Сколько милилитров воды вы хотите залить в машину? ";
    std::cin >> water;
    if (water >= 0){
      incorrect = false;
    } else {
      std::cout << "Извините, колличество жидкости не может быть отрицательным числом.\n";
    }
  }

  incorrect = true;

  while(incorrect){
    std::cout << "Сколько милилитров молока вы хотите залить в машину? ";
    std::cin >> milk;
    if (milk >= 0){
      incorrect = false;
    } else {
      std::cout << "Извините, колличество жидкости не может быть отрицательным числом.\n";
    }
  }

  for(;;){
    bool canMakeAmericano = water >= 300;
    bool canMakeLatte = (water >= 30 && milk >= 270);

    if (!canMakeAmericano && !canMakeLatte ){
      break;
    } else {
      incorrect = true;

      while(incorrect){
        std::cout << "Кофемашина готова к работе :) \n";
        std::cout << "Какой напиток вам приготовить?\n";
        std::cout << "Если вы хотите американо - нажмите 1, если латте - нажмите 2\n";
        std::cin >> choose;
        if (choose == 1 || choose == 2){
          incorrect = false;
        } else {
          std::cout << "Неизвестная команда, американо - нажмите 1, латте - нажмите 2\n";
        }
      }

      if(choose == 1){
        if(canMakeAmericano){
          std::cout << "Ваш напиток готов\n";
          water-=300;
          americano++;
        } else {
          std::cout << "Не хватает воды\n";
        }
      } else if(choose == 2){
        if (canMakeLatte){
          std::cout << "Ваш напиток готов\n";
          water -= 30;
          milk -= 270;
          latte++;
        } else if(water < 30){
          std::cout << "Не хватает воды\n";
        } else if (milk < 270){
          std::cout << "Не хватает молока\n";
        }
      }
    }
  }
  std::cout << "Ингридиенты подошли к концу.\n";
  std::cout << "Осталось воды: " << water << "\n";
  std::cout << "Осталось молока: " << milk << "\n";
  std::cout << "Всего за смену было приготовлено\n";
  std::cout << "Американо: " << americano << "\n";
  std::cout << "Латте: " << latte << "\n";
}
