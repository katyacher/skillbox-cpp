#include <iostream>

int main() {
  std::cout << "Задача 1. Калькулятор скидки.\n";

  std::cout << "Вы покупаете 3 товара в магазине. Если сумма вашего чека превышает 10 000 руб, вам будет сделана скидка 10%. Напишите программу которая запрашивает 3 стоимости товара и вычисляет сумму чека.\n";

  std::cout << "Решение: \n";
  std::cout << "Введите стоимость первого товара: \n";
  int firstProductCost = 0;
  std::cin >> firstProductCost;

  std::cout << "Введите стоимость второго товара: \n";
  int secondProductCost = 0;
  std::cin >> secondProductCost;
  
  std::cout << "Введите стоимость третьего товара: \n";
  int thirdProductCost = 0;
  std::cin >> thirdProductCost;

  int sum = firstProductCost + secondProductCost + thirdProductCost;
  
  if (sum > 10000){
    int discount = sum/10;
    sum = sum - discount;
  }

  std::cout << "Полная стоимость товаров: " << sum;
  
}
