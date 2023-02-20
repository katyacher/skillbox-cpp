#include <iostream>

int main() {
  std::cout << "9.2 Bulls and cows \n";

  std::cout << "Input the intended four-digit number: ";
  std::string number_1_str;
  std::cin >> number_1_str;

  std::cout << "Enter the second number: "; 
  std::string number_2_str;
  std::cin >> number_2_str;

  if(number_1_str.length() != 4 
      || number_1_str[0] < '0' || number_1_str[0] > '9'
      || number_1_str[1] < '0' || number_1_str[1] > '9'
      || number_1_str[2] < '0' || number_1_str[2] > '9'
      || number_1_str[3] < '0' || number_1_str[3] > '9'
      || number_2_str.length() != 4 
      || number_2_str[0] < '0' || number_2_str[0] > '9'
      || number_2_str[1] < '0' || number_2_str[1] > '9'
      || number_2_str[2] < '0' || number_2_str[2] > '9'
      || number_2_str[3] < '0' || number_2_str[3] > '9'){
    std::cout << "Error. Try again.\n";
  } else {
    int bulls = 0; 
    int cows = 0;
     
    for(int i = 0; i < number_1_str.length(); i++){
      if (number_1_str[i] == number_2_str[i]){
          bulls++;
          number_1_str[i] = ' ';
          number_2_str[i] = ' ';
      }
    }

    for (int i = 0; i < number_1_str.length(); i++){
      for(int j = 0; j < number_2_str.length(); j++){
        if (number_1_str[i] == ' ' || number_1_str[j] == ' '){
          continue;   
        } else if (number_1_str[i] == number_2_str[j]){
          cows++;
        }
      }
    }
    
    std::cout << "Bulls " << bulls << ", cows " << cows << ".\n";
  }
}
