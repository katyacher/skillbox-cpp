#include <iostream>

int main() {
  std::cout << "Задача 4. Барберы (необязательная).\n";

  std::cout << "В небольшом городке проживает 18 000 взрослых человек: 9 000 мужчин и 9 000 женщин. Согласно традиции этого городка все мужчины обязаны носить бороду. Один предприимчивый житель открыл сеть барбершопов, чтобы помочь мужчинам ухаживать за их бородами. Однако он никак не может посчитать сколько всего специалистов-барберов для этого того нужно. Вам нужно написать программу которая будет рассчитывать сколько мужчин можно постричь во всех барбершопах исходя из следующих данных:\n";

  std::cout << "* каждый из 9000 мужчин посещает барбершоп раз в месяц (30 дней)\n";

  std::cout << "* один барбер способен обслужить одного клиента за 1 час\n";

  std::cout << "* смена барбера - 8 часов\n";

  std::cout << "Программа должна спросить сколько мужчин проживает в городе и сколько всего барберов уже работает во всех барбершопах, и посчитать сколько барберов нужно, и если их недостаточно - выдать сообщение об этом. Если барберов достаточно - сказать и об этом.\n";

  std::cout << "Подсказка: в конструкции условия можно сравнивать не только переменную с числом, но и две переменные! А еще - целые математические выражения. Например: if (a * b > c) …\n\n\n";

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
  if (requiredBurbersCount*mansPerBurberInMonth < mansCount){
    requiredBurbersCount+=1;
  }
  
  std::cout << "Необходимо барберов: "<< requiredBurbersCount <<" \n";

  if (requiredBurbersCount > burbersCount){
     std::cout << "Нужно больше барберов?\n"; 
  } else {
     std::cout << " Барберов хватает"; 
  }



}