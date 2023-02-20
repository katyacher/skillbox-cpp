#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::cout << "16.3 Calculator\n";

  std::string buffer;
  std::cout << "Put the mathematical expression:  a operation(+-/*) b "<< std::endl;
  std::cin >> buffer;
  std::stringstream buffer_stream(buffer); 

  double a;
  double b;
  char operation;
  
  buffer_stream >> a >> operation >> b;
  
  if(operation == '+') std::cout << a + b;
  else if(operation == '-') std::cout << a - b;
  else if(operation == '*') std::cout << a * b;
  else if(operation == '/') std::cout << a / b;
  else std::cout << "Unknown operation.";

  return 0;
}
