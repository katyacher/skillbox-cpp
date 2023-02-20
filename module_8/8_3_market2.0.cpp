#include <iostream>

int main() {
  std::cout << "Задача 1. Орехи\n";

  float total_weight, price_per_100_g, discount, total_price = .0f;

  std::cout << "Цена товара за 100 гр: ";
  std::cin >> price_per_100_g;
  std::cout << "Итоговы вес (в граммах): ";
  std::cin >> total_weight;
  std::cout << "Скидка (в процентах): ";
  std::cin >> discount;

  discount = (total_weight * price_per_100_g/100 )* discount/100;
  total_price = (total_weight * price_per_100_g/100 )- discount;

  std::cout << "Итоговая цена: " << total_price; 

}
