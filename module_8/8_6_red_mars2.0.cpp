#include <iostream>

int main() {
  std::cout << "6. Red Mars 2.0\n";

  int x = 0.001*1.496e+11; 
  int y = 0; 
  std::string command;

  std::cout << "Welcome! To move the rover, use the following keys: \n";
  std::cout << "w - up, s - down, a - to the left , d - to the right\n";

  while(true){
    std::cout << "The rover is in position " << x << ": "<< y << ", enter the command:\n";
    std::cin >> command;

    if (command == "w" ){
      x++;
    } else if (command == "s" ){
      x--;
    } else  if (command == "a" ){
      y--;
    } else if (command == "d"){
      y++;
    } else {
      std::cout << "Error: unknown command.\n";
    }
  } 
}
