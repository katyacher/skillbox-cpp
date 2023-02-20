#include <iostream>

int main() {
  std::cout << "Задача 5. Счастливый билетик.\n";

  int ticket = 0;
 
  std::cout << "Введите шестизначное число\n";
  std::cin >> ticket;

  int rightHalf = 0;
  int leftHalf = 0;

  while(ticket > 999){
    rightHalf += ticket%10;
    ticket/=10;
  }
  while(ticket > 0){
    leftHalf += ticket%10;
    ticket/=10;
  }

  if (leftHalf == rightHalf){
    std::cout << "Ваш билет счастливый!";
  } else {
    std::cout << "Попробуйте еще раз!";
  }
}
