#include <iostream>
#include <cmath>

int main() {
  std::cout << "8.8 Biolaboratory 2.0!\n";

  float water, antibiotic, bacteria = .0f; 
  int time = 20;

  std::cout << "Enter the number of drops of water: ";
  std::cin >> water;
  std::cout << "Enter the number of drops of pure antibiotic: ";
  std::cin >> antibiotic;
  std::cout << "Enter the number of bacteria: ";
  std::cin >> bacteria;

  if( water<= 0 || antibiotic < 0 || bacteria < 0 ) {
    std::cout << "The number of bacteria and drops of water and antibiotic cannot be negative. The number of drops of water cannot be zero. Try again.\n";
  } else {
    for(int i = 1; i <= time; i++){
      bacteria = 2*bacteria - bacteria*(antibiotic/water);

      std::cout  << i << " minute has passed, " << (int)bacteria << " bacteria, " << (int)antibiotic << " antibiotic remain in the Petri dish.\n";
    
      if (bacteria < 0) {
        std::cout << "All bacteria died\n";
        break;
      } else if ((int)antibiotic <= 0){
        std::cout << "The antibiotic has run out and no longer works.\n";
        break;
      } 
      antibiotic = antibiotic - antibiotic * 0.2;
    }
  } 
}
