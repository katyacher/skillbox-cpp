#include <iostream>

int main() {
  std::cout << "Задача 6. Улучшим барберов.\n";

  int burbersCount = 0;
  int mansCount = 0;

  std::cout << "Cколько мужчин проживает в городе?"; 
  std::cin >> mansCount;

  std::cout << "Cколько барберов удалось нанять?"; 
  std::cin >> burbersCount;

  int mansPerBurber = 8;
  int mansPerBurberInMonth = mansPerBurber*30;

  std::cout << "Один барбер подстрижет "<< mansPerBurberInMonth <<" клиентов (та)\n"; 

  int requiredBurbersCount = mansCount/mansPerBurberInMonth;

  if ((requiredBurbersCount*mansPerBurberInMonth) % mansCount != 0){
    requiredBurbersCount+=1;// улучшение 
  }
  
  std::cout << "Необходимо барберов: "<< requiredBurbersCount <<" \n";

  if (requiredBurbersCount > burbersCount){
     std::cout << "Нужно больше барберов?\n"; 
  } else {
     std::cout << " Барберов хватает"; 
  }

}
