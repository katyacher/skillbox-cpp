#include <iostream>

int main() {
  std::cout << "Задание 1. Улучшаем гонщика" << std::endl;
  int lap = 4;
  int engine = 254;
  int wheels = 93;
  int steeringWheel = 49;
  int wind = 21;
  int rain = 17;
  int speed = engine + wheels + steeringWheel - wind- rain;

  std::cout << "===================\n";
  std::cout <<"Супер гонки. Круг "<< lap << "\n";
  std::cout << "===================\n";
  std::cout << "Шумахер ("<< speed << ")\n";
  std::cout << "===================\n";
  std::cout << "Водитель: Шумахер \n";
  std::cout << "Скорость: "<< speed << "\n";
  std::cout << "-------------------\n";
  std::cout << "Оснащение \n";
  std::cout << "Двигатель: +"<< engine << "\n";
  std::cout << "Колеса: +"<< wheels << "\n";
  std::cout << "Руль: +"<< steeringWheel << "\n";
  std::cout << "-------------------\n";
  std::cout << "Действия плохой погоды \n";
  std::cout << "Ветер: -"<< wind << "\n";
  std::cout << "Дождь: -"<< rain << "\n";

}
