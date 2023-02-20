#include <iostream>

int main() {
  std::cout << "Задача 5. Банкомат 3.0.\n";

  int a,b,c,d = 0;
  int sum = 0;


  while (1){
    std::cout << "Введите 4 чила: \n";
    std:: cin >> a >> b >> c >> d;
    sum = a + b + c + d;
    if (sum == 42){
      std::cout << "Ввод корректный \n";
      break;
    } else{
       std::cout << "Ввод некорректный, попробуйте еще раз\n";
    }
  }
  return 0;

}
