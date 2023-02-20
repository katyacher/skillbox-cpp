#include <iostream>

int main() {
  std::cout << "Задача 5. Склонение русских слов.\n";

  int productCost = 0;
  std::cout << "Введите стоимость товара: ";
  std::cin >> productCost;

  std::cout << "Cтоимость товара:  " << productCost;
  if (productCost%10 == 1){
    std::cout << " рубль";
  } else if (productCost%10 == 0 || productCost%10 >= 5 || (productCost/10)%10 == 1){
     std::cout << " рублей";
  } else{
    std::cout << " рубля";
  }
}
