#include <iostream>

int main() {
  std::cout << "Задача 9. Вклады.\n";

  int X = 0;// начальная сумма вклада
  int P = 0;// проценты по вкладу
  int Y = 0;// сумма по вкладу с процентами
  int years = 0; // колличество лет до получения суммы Y
  bool incorrect = true;
  
  while(incorrect){
    std::cout << "Ваша сумма вклада: \n";
    std::cin >> X;

    std::cout << "Ежегодный процент по вкладу (не более 100): \n";
    std::cin >> P;
  
    std::cout << "Какую сумму требуется получить? \n";
    std::cin >> Y;

    if(P<=100){
      incorrect = false;
    } else {
      std::cout << "Некорректный ввод, попробуйте еще раз \n";
    }
  }
  
  if (X < 100){
    X*= 100;
    Y*=100;
  } 

  while(X < Y){
    X += (X * P)/ 100;
    years++;   
  }

  std::cout << "Срок вклада не менее " << years << " лет/года";
  
}
