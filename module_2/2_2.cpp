#include <iostream>

int main() {
  int price = 0;
  int deliveryCost = 0;
  int discount = 0;
  
  std::cout << "Приветствуем вас в калькуляторе! Он поможет рассчитать полную стоимость товаров с учетом скидок и доставки.\n\n";
  
  std::cout << "Введите стоимость товара: ";
  std::cin >> price;
  std::cout << "\n";
  std::cout << "Введите стоимость доставки: ";
  std::cin >> deliveryCost;
  std::cout << "\n";
  std::cout << "Введите размер скидки: ";
  std::cin >> discount;
  std::cout << "\n";
  std::cout << "-----Считаем-----\n\n";
  std::cout << "Итого: " << price + deliveryCost - discount;

}
