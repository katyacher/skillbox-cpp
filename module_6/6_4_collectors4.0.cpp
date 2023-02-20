#include <iostream>

int main() {
  std::cout << "Задача 4. Коллекторы 2.0\n";
  
  std::string name;
  int debt = 0;
  int sum = 0;
  bool f = true;

  std::cout << "Ваше имя? \n";
  std::cin >> name;

  std::cout << "Введите сумму долга: \n";
  while (f){
    std::cin >> debt;
    if (debt > 0){
      f = false;
    } else{
      std::cout << "Введите положительное число больше нуля: \n";
    }
  }

  while(debt > 0){
    std::cout << name << ", ваша задолженность составляет " << debt;
    if (debt%10 == 0 || debt%10 >= 5 || (debt/10)%10 == 1){
      std::cout << " рублей.\n";
    } else if (debt%10 == 1){
      std::cout << " рубль.\n";
    }else{
      std::cout << " рубля.\n";
    }
 
    std::cout << "Сколько рублей вы внесете прямо сейчас, чтобы ее погасить?\n";
    std::cin >> sum;
    if (sum > 0){
      debt -= sum;
    } else{
      std::cout << "Введите положительное число. \n";
    }
  }

  debt = -debt; //положительный остаток
  std::cout << "Ваш долг полностью погашен. Спасибо!\n";
  std::cout << "Остаток на счету  " << debt;
  if (debt%10 == 0 || debt%10 >= 5 || (debt/10)%10 == 1){
      std::cout << " рублей.\n";
    } else if (debt%10 == 1){
      std::cout << " рубль.\n";
    }else{
      std::cout << " рубля.\n";
    }

}
