#include <iostream>
 
#include <cmath>

int main() {
  std::cout << "10. Eggs\n";

  float min = .0f;
  float max = 4.0f;
  float level = .0f;
  std::cout << "Enter the maximum permissible level of danger: ";
  std::cin >> level;

  if (level < 0) {
    std::cout << "Error: the maximum permissible level of danger must be  greater than zero.\n";
  } else {
    float danger = .0f;
    float depth = (min + max) / 2.0f;
    do {
      danger = pow(depth, 3) - 3.0f * pow(depth, 2) - 12.0f * depth + 10.0f;

      if (danger > 0) {
        min = depth;
      } else {
        max = depth;
      }
      depth = (min + max) / 2.0f;
    } while (fabs(danger) > level);

    std::cout << "Approximate safe laying depth: " << depth << " m.\n";
  }
}

