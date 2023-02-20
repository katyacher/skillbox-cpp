#include <iostream>

int main() {
  std::cout << "Задача 8. Сокращение дроби.\n";

  int num, a = 0;// числитель
  int den, b = 0;// знаменатель
  int gcd = 1;// greatest common divisor - нод
  bool incorrect = true;

  std::cout << "Числитель и знаменатель дроби:\n";
  
  while(incorrect){
    std::cin >> num >> den;
    if (num == 0 || den == 0){
    std::cout << "Числитель или знаменатель дроби не может быть 0. Введите любое число, кроме 0.\n";
    }else {
      incorrect = false;
    }
  }
  
  std::cout << "Ваша дробь " << num << "/" << den;
  
  // дополнительные переменные для вычисления нод
  if (num < 0){
    a = -num;
  } else {
    a = num;
  }
  if (den < 0){
    b = -den;
  } else {
    b = den;
  }

 // алгоритм Евклида итерационный вычитанием
  while (a != b) {
    if (a > b) {
      int tmp = a;
      a = b;
      b = tmp;
    }
    b = b - a;
  }
  
  gcd = b;// возможно лишняя переменная, для читаемости кода

  if(gcd == 1){
    std::cout << " не сокращается.";
  } else {
    std::cout << " после сокращения имеет вид " << num/gcd << "/" << den/gcd;
  }
}
