#include <iostream>

int main() {
  int homeRepairsFullCost = 4000000;
  int numberOfEntrance = 10;
  int numberOfFlat = 40;
  int homeRepairsPay = homeRepairsFullCost/(numberOfEntrance * numberOfFlat);
  
  std::cout << "Приветствуем вас в калькуляторе квартплаты!\n\n";
  
  std::cout << "Введите сумму, указанную в квитанции: " << homeRepairsFullCost << "\n";
 
  std::cout << "Сколько подъездов в вашем доме? " << numberOfEntrance << "\n";
  
  std::cout << "Сколько квартир в каждом подъезде? " << numberOfFlat << "\n";
  
  std::cout << "-----Считаем-----\n";
  std::cout << "Каждая квартира должна заплатить по " << homeRepairsPay << " руб."; 
}
