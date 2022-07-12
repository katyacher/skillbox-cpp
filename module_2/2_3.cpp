#include <iostream>

int main() {
  int shiftTimeMin = 480;
  int clientOrderTimeMin = 2;
  int cashierOrderTimeMin = 4;
  int numberOfClient = shiftTimeMin/(clientOrderTimeMin + cashierOrderTimeMin);
  
  std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n\n";
  
  std::cout << "Введите длительность смены в минутах: " << shiftTimeMin << "\n";
 
  std::cout << "Сколько минут клиент делает заказ? " << clientOrderTimeMin << "\n";
  
  std::cout << "Сколько минут кассир собирает заказ? " << cashierOrderTimeMin << "\n";
  
  std::cout << "-----Считаем-----\n";
  std::cout << "За смену длиной " << shiftTimeMin << " минут кассир успеет обслужить " << numberOfClient << " клиентов."; 
}
