#include <iostream>
#include <cmath>

int main() {
  std::cout << "1. Space simulator\n";

  float F,m,t;
  std::cout << "Enter F: ";
  std::cin >> F;
  std::cout << "Enter m: ";
  std::cin >> m;
  std::cout << "Enter t: ";
  std::cin >> t;

  while(F <= 0 || m <= 0 || t <= 0){
    std::cout << "Error. Try again.\nEnter F, m, t: ";
    std::cin >> F >> m >> t;
  }

  float S = ((F/m)*pow(t,2))/2;
  std::cout << "Distance is " << S;

}
