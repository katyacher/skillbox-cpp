#include <iostream>

int main() {
  std::cout << "3. Long real number\n";

  std::cout << "Input a real number: ";
  std::string n_str;
  std::cin >> n_str;

  bool is_real = true;
  int dot_count = 0;
  int num_count = 0;

  for(int i = 0; i < n_str.length(); i++){
    if((n_str[i] < '0' || n_str[i] > '9') 
        && n_str[i] != '.' && n_str[0]!= '-'){
      std::cout << "Error. We do not allow the use of the character " <<    n_str[i] << " in the entry.\n";
      is_real = false;
      break;
    }

    if (n_str[i] == '.'){
      dot_count++;
      if(dot_count > 1){
        std::cout << "Error.There can be only one decimal point.\n";
        is_real = false;
        break;
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
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }
}
