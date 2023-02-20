#include <iostream>

int main() {
  std::cout << "Задача 7. Банкомат-2.\n";
  
  int n5000 = 0;
  int n2000 = 0;
  int n1000 = 0;
  int n500 = 0;
  int n200 = 0;
  int n100 = 0;

  int N = 0;
  std::cout << "Введите необходимую сумму (не более 150000р):\n";
  std::cin >> N;

  if (N%100 != 0){
    std::cout << "Выдать ровно " << N << " рублей невозможно. Введите сумму, кратную 100:\n";
    std::cin >> N; 
  }

  if (N > 150000){
    std::cout << "Банкомат не может выдать за раз более 150 000 рублей. Введите сумму, кратную 100 и не более 150000р:\n";
    std::cin >> N; 
    }

  if (N >= 5000){
    n5000 = N/5000;
    N = N%5000;
    std::cout << n5000 << " по 5000 \n";
  } 
  if (N >= 2000){
    n2000 = N/2000;
    N = N%2000;
    std::cout << n2000 << " по 2000 \n";
  } 
   if (N >= 1000){
    n1000 = N/1000;
    N = N%1000;
    std::cout << n1000 << " по 1000 \n";
  } 
   if (N >= 500){
    n500 = N/500;
    N = N%500;
    std::cout << n500 << " по 500 \n";
  } 
   if (N >= 200){
    n200 = N/200;
    N = N%200;
    std::cout << n200 << " по 200 \n";
  } 
   if (N >= 100){
    n100 = N/100;
    N = N%100;
    std::cout << n100 << " по 100 \n";
  }

}
