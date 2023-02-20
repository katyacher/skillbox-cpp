#include <iostream>

int main() {
  std::cout << "Вренное время 6.4\n";

  int n = 0;
  std::cout << "Введите число: \n";
  std::cin >> n;

  int result = 0;
  while(n!=0){
    result = result * 10 + n%10;
    n = n/10;
  }
  std::cout << result;
  
}
