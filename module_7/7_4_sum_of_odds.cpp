#include <iostream>

int main() {
  std::cout << "Задача 4. Сумма нечётных.\n";
  int n = 0;
  int sum = 0;

  std::cout << "До какого числа нужно вычеслить сумму нечетных чисел?\n";
  std::cin >> n;

  for(int i = 0; i <= n; i++){
    if(i%2 != 0){
      sum+=i;
    }
  }
  std::cout << sum << "\n";
}
