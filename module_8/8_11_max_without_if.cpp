#include <iostream>
#include <cmath>

int main() {
  std::cout << "11. Hard to learn, easy to fight.\n";

  float a,b = .0f;

  std::cout << "Enter two numbers:\n";
  std::cin >> a >> b;

  float max = (a + b + fabs(a-b))/2;

  std::cout << "Maximum is " <<  max << "\n";
}
