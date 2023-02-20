#include <iostream>
#include <cmath>

int main() {
  std::cout << "8.2 Ocean's Friends\n";

  int n,k = 0;
  float t = .0f;
  std::cout << "Enter a number of handles: ";
  std::cin >> n;
  std::cout << "Enter a number of positions: ";
  std::cin >> k;
  std::cout << "Enter a time in seconds per one combination: ";
  std::cin >> t;

  if (n > 0 && k > 0 && t > 0){
    std::cout << "Full time is " << pow(k,n)*t << "s";
  } else {
    std::cout << "Error. Try again. Numbers must be positive\n";
  }
}
