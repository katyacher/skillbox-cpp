#include <iostream>

int n;
int k;

int jumping_ways(int n, int i){
  return n == 0 ? 1 : n < 0 || i < 1 ? 0 : jumping_ways(n-i, k) + jumping_ways(n, i-1);
}

int main() {
  std::cout << "18.2 Jumping rabbit" << std::endl;
  std::cout << "Enter the number of steps: ";
  std::cin >> n;
  std::cout << "Enter the maximum jump length: ";
  std::cin >> k;
  std::cout << jumping_ways(n, k);
}
 

