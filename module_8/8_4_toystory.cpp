#include <iostream>
#include <cmath>

int main() {
  std::cout << "4. Toy story. \n";
  std::cout << "Enter the dimensions of the bar\n";
  float x,y,z = .0f;
  std::cout << "X: ";
  std::cin >> x;
  std::cout << "Y: ";
  std::cin >> y;
  std::cout << "Z: ";
  std::cin >> z;

  if (x <= 0 || y <= 0 || z <= 0) {
    std::cout << "Error. The dimensions of the bar must be real numbers greater than 0. Try again.\n";
  } else {
    int numOfcubesX = (int)x/5;
    int numOfcubesY = (int)y/5;
    int numOfcubesZ = (int)z/5;

    int numOfcubesXYZ = numOfcubesX * numOfcubesY * numOfcubesZ;
    std::cout << "This bar can be used to make " << numOfcubesXYZ << " cubes.\n";

    int set = cbrt(numOfcubesXYZ);
    if (set > 1)
      std::cout << "They can be used to make a set of  " << pow(set,3) << " cubes.\n";
    else
      std::cout << "It will not work to compose a set.\n";
  }
}
