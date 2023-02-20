#include <iostream>

std::string encrypt_caesar(std::string str, int shift);
std::string decrypt_caesar(std::string str, int shift);

int main() {
  std::cout << "11. Caesar cipher\n";

  std::cout << "Enter a string:" << std::endl;
  std::string str;
  std::getline(std::cin, str);
  
  
  std::cout << "Enter a shift:" << std::endl;
  int shift = 0;
  std::cin >> shift;

  std::string new_str = encrypt_caesar(str, shift);
  std::cout << new_str << std::endl;  
  new_str = decrypt_caesar(new_str, shift);
  std::cout << new_str << std::endl;
}  

std::string encrypt_caesar(std::string str, int shift) {
  int n = 26;// power  of alphabet
  std::string result = "";
  shift = shift % n;
  char c = ' ';
  
  for(int i = 0; i < str.length(); i++){
    c = char(int(str[i] + shift));
    if(str[i] >= 'a' && str[i] <= 'z'){
      if (c < 'a'){
        c = ('z' + 1 - ('a' - c));
      };
      if (c > 'z'){
        c = ('a' - 1 + c - 'z');
      }
      result += c;
    } else if (str[i] >= 'A' && str[i] <= 'Z' ){
      if (c < 'A'){
        c = ('Z' + 1 - ('A' - c));
      };
      if (c > 'Z'){
        c = ('A' - 1 + c - 'Z');
      }
      result += c;
    } else {
      result += str[i];
    }
  }
  return result;
}

std::string decrypt_caesar(std::string str, int shift){
  return encrypt_caesar(str, - shift);
}


