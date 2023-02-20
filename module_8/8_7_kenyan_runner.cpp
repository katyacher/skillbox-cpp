#include <iostream>
#include <cmath>

int main() {
  std::cout << "7. Kenyan runner \n";

  int distance = 0;
  bool incorrect = true;

  while (incorrect){
    std::cout << "Hi Sam! How many kilometers did you run today? ";
    std::cin >> distance;
    if(distance <= 0){
      std::cout << "Distance cannot be negative or zero. Try again.\n";
    } else {
      incorrect = false;
    }
  }
  
  float temp, totalTempInsec = .0f;

  for (int i = 1; i <= distance; i++){
    incorrect = true;
    while(incorrect){
      std::cout << "What was your temp per kilometer " << i << " ? ";
      std::cin >> temp;
      if (temp <= 0){
        std::cout << "Temp cannot be negative or zero. Try again.\n";
      } else {
        totalTempInsec += temp;
        incorrect = false;
      }
    }
  }
  totalTempInsec/= distance;
  int averageTempInmin = totalTempInsec/60;
  int averageTempInsec = (int)round(totalTempInsec) % 60;

  std::cout << "Your average temp per workout: " << averageTempInmin << " min " << averageTempInsec << " sec.";
}
