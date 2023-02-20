#include <iostream>
#include <cstdlib> // atof()

int is_real_number(std::string n_str);

int main() {
  std::cout << "Comparison of long real numbers.\n";
  std::cout << "Input a first real number: ";
  std::string first_n_str;
  std::cin >> first_n_str;
  std::cout << "Input a second real number: ";
  std::string second_n_str;
  std::cin >> second_n_str;

  if(!is_real_number(first_n_str) && !is_real_number(second_n_str)){
    std::cout << "Incorrect input. Try again" << std::endl;
    return 0;
  }

  float first_n = atof(first_n_str.c_str());
  float second_n = atof(second_n_str.c_str());

  if (first_n == second_n){
    std::cout << "Equal" << std::endl;
  } else if (first_n > second_n){
    std::cout << "More" << std::endl;
  } else if (first_n < second_n){
    std::cout << "Less" << std::endl;
  }
  
}

int is_real_number(std::string n_str){
  bool is_real = true;
  int dot_count = 0;
  int num_count = 0;

  for(int i = 0; i < n_str.length(); i++){
    if((n_str[i] < '0' || n_str[i] > '9') 
        && n_str[i] != '.' && n_str[0]!= '-'){
      std::cout << "Error. We do not allow the use of the character " <<    n_str[i] << " in the entry.\n";
      is_real = false;
      return 0;
    }

    if (n_str[i] == '.'){
      dot_count++;
      if(dot_count > 1){
        std::cout << "Error.There can be only one decimal point.\n";
        is_real = false;
        return 0;
      }
    } 
    
    if(n_str[i] >= '0' && n_str[i] <= '9'){
      num_count++;
    }
  }

  if(num_count < 1){
    std::cout << "Error.There must be at least one digit in the entry.\n";
    is_real = false;
  }

  if(is_real){
    //std::cout << "Yes";
    return 1;
  } else {
    //std::cout << "No";
    return 0;
  }
}
