#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string fish, available, temp;
  int posRiver, posBasket;
  std::cout << "What will you fish today?" << std::endl;
  std::cin >> fish;
  std::ifstream riverout("river.txt");
  while (!riverout.eof() && available != fish) {
    riverout >> available;
    if (available == fish)
      posRiver = riverout.tellg();
  }
  riverout.close();
  std::ofstream riverin("river.txt", std::ios::in);
  riverin.seekp(posRiver - available.length());
  std::string buffer(available.length(), ' ');
  riverin << buffer;
  riverin.close();
  if (available == fish) {
    std::ofstream basketin("basket.txt", std::ios::app);
    basketin << std::endl << available;
    basketin.close();
    std::cout << "You catch 1 fish" << std::endl;
  } else
    std::cout << "You don't catch a fish" << std::endl;
}
