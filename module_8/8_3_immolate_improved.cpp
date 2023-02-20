#include <iostream>

int main() {
  std::cout << "3. Immolate Improved!\n";

  float health, resistance, power, damage = .0f;
  std::cout << "Enter the amount of health (from 0 to 1): ";
  std::cin >> health;
  std::cout << "Enter the magic resistance of the orc (from 0 to 1): ";
  std::cin >> resistance;

  if (health < 0 || health > 1 || resistance < 0 || resistance > 1){
    std::cout << "Error. Health and magic resistance must be real numbers from 0 to 1. Try again.\n";
  } else {
     while (health > 0){
      std::cout << "Strike to the orc.\nYour power is: ";
      std::cin >> power;
      damage =  power - power*resistance;
      health-= damage;

      if (health < 0)
        health = 0;
        
      std::cout << "The final damage from the hit: " << damage << "\n";
      std::cout << "The remaining health points of the orc: " << health << "\n\n";
    }
    std::cout << "The End";
  }
  
}
