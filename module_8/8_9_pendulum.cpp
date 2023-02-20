#include <iostream>

int main() {
  std::cout << "9. Pendulum.\n";

  float startAmp, finishAmp = .0f;
  int count = 0;
  std::cout << "Enter the starting amplitude: ";
  std::cin >> startAmp;
  std::cout << "Enter the final amplitude: ";
  std::cin >> finishAmp;

  if(startAmp < 0 || finishAmp < 0){
    std::cout << "Error. The amplitude of the oscillation must be positive.\n";
  } else if (finishAmp > startAmp){
    std::cout << "Error. The starting amplitude must be greater than the final. Try again.\n";
  } else {
    while(startAmp > finishAmp){
      startAmp*= 1-0.084f;
      count++;
    }

    std::cout << "The pendulum is considered stopped after " << count << " oscillations.\n";
  }
}
