#include <iostream>

int main() {
  std::cout << "Задача 2. Симулятор маршрутки \n\n";

  const int fare = 20;
  int passengersIn = 0;
  int passengersOut = 0;
  int passengersSum = 0;
  int profit = 0;

  std::cout << "Прибываем на остановку Улица Программистов. В салоне пассажиров:" << passengersSum << "\n";

  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> passengersOut;

  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> passengersIn;

  passengersSum = passengersSum - passengersOut + passengersIn;
  profit = profit + passengersOut * fare;

  std::cout << "Отправляемся с остановки Улица Программистов. В салоне пассажиров:" << passengersSum << "\n";

  std::cout << "-----------Едем---------\n\n";
  

  std::cout << "Прибываем на остановку Проспект Алгоритмов. В салоне пассажиров: " << passengersSum << "\n";

  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> passengersOut;

  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> passengersIn;

  passengersSum = passengersSum - passengersOut + passengersIn;
  profit = profit + passengersOut * fare;
  
  std::cout << "Отправляемся с остановки Проспект Алгоритмов. В салоне пассажиров:" << passengersSum << "\n";

  std::cout << "-----------Едем---------\n\n";


  std::cout << "Прибываем на остановку Структуры данных. В салоне пассажиров: " << passengersSum << "\n";
  
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> passengersOut;

  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> passengersIn;

  passengersSum = passengersSum - passengersOut + passengersIn;
  profit = profit + passengersOut * fare;
  
  std::cout << "Отправляемся с остановки Структуры данных. В салоне пассажиров:" << passengersSum << "\n";

  std::cout << "-----------Едем---------\n\n";


  std::cout << "Прибываем на остановку Многопоточное программирование. В салоне пассажиров: " << passengersSum << "\n";
  
  std::cout << "Сколько пассажиров вышло на остановке? ";
  std::cin >> passengersOut;

  std::cout << "Сколько пассажиров зашло на остановке? ";
  std::cin >> passengersIn;

  passengersSum = passengersSum - passengersOut + passengersIn;
  profit = profit + passengersOut * fare;
  
  std::cout << "Отправляемся с остановки Многопоточное программирование. В салоне пассажиров:" << passengersSum << "\n\n";

  int salary = profit/4;
  int fuelCost =  profit/5;
  int taxes = profit/5;
  int repairs = profit/5;
  int income =  profit - salary - fuelCost - taxes - repairs;

  std::cout << "Всего заработали: " << profit << " руб.\n";
  std::cout << "Зарплата водителя: " << salary << " руб.\n";
  std::cout << "Расходы на топливо: " << fuelCost << " руб.\n";
  std::cout << "Налоги: " << taxes << " руб.\n";
  std::cout << "Расходы на ремонт машины: " << repairs << " руб.\n";
  std::cout << "Итого доход: " << income << " руб.\n";
}

