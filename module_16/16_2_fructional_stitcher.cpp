#include <iostream>
#include <string>

int main() {
    std::cout << "16.2 Fractional stitcher." << std::endl;
    std::string whole_part = "";
    std::string frac_part = "";

    std::cout << "Enter the whole part of number: ";
    std::getline(std::cin, whole_part);

    std::cout << "Enter the fractional part of number: ";
    std::getline(std::cin, frac_part);
  
    double result = std::stod(whole_part + "." + frac_part);
    std::cout <<result << std::endl;

    return 0;
}

