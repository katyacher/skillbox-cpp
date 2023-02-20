#include <iostream>

int main() {
  std::cout << "Задача 5. Биолаборатория.\n";

  int bacteria = 0; // колличество бактерий
  int antibiotic = 0; // число капель антибиотика
  int wereKilledInhaur = 10;

  std::cout << "Сколько бактерий положить в чашку? ";
  std::cin >> bacteria;
  std::cout << "Сколько капель антибиотика добавить в чашку? ";
  std::cin >> antibiotic;

  if (bacteria > 0 && antibiotic > 0){
    for(; wereKilledInhaur > 0 ; wereKilledInhaur-- ){
      bacteria *= 2;
      bacteria -= wereKilledInhaur * antibiotic;

      if (bacteria < 0){
        bacteria = 0;
        break;
      }

      std::cout << "Прошло часов: " << -(wereKilledInhaur - 1 - 10);
      std::cout << " , бактерий осталось: " << bacteria << "\n";
    }
  } else {
    std::cout << "Ошибка: числа должны быть положительными.\n";
  }

  std::cout << "Эксперимент окончен.\n";
  std::cout << "В чашке Петри осталось бактерий: " << bacteria << "\n";

}
