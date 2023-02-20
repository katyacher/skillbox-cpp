#include <iostream>

int main() {
  std::cout << "Задача 2. Коллекторы.\n";
  
  std::string name;
  int debt = 0;
  int sum = 0;
  bool incorrect = true;

  std::cout << "Ваше имя? \n";
  std::cin >> name;

  std::cout << "Введите сумму долга: \n";
  while (incorrect){
    std::cin >> debt;
    if (debt > 0){
      incorrect = false;
    } else{
      std::cout << "Введите положительное число: \n";
    }
  }

  std::cout << name << ", ваша задолженность составляет " << debt;
    if (debt%10 == 1){
      std::cout << " рубль.\n";
    } else if (debt%10 == 0 || debt%10 >= 5 || (debt/10)%10 == 1){
      std::cout << " рублей.\n";
    } else{
      std::cout << " рубля.\n";
    }
  std::cout << "Сколько рублей вы внесете прямо сейчас, чтобы ее погасить?\n";

  while(debt > 0){
    std::cin >> sum;
    if (sum >= debt){
      std::cout << "Ваш долг полностью погашен. Спасибо!\n";
      break;
    } else{
      std::cout << "Внесите сумму, равную сумме долга или больше, пожалуйста. \n";
    }
  }
  
}
