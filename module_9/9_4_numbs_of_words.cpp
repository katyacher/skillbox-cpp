#include <iostream>

int main() {
  std::cout << "4. Counting the number of words.\n";

  std::cout << "Enter the string: ";
  std::string s;
  std::getline(std::cin, s);

  char space = ' ';
  bool is_word = false;
  bool is_space = false;
  int word_count = 0;

  for (int i = 0; i < s.length(); i++){
    if(s[i]!= space){
      if(is_word){
        continue;
      }
      is_word = true;
      is_space = false; 
      word_count++;
    } else {
      if(is_space){
        continue;
      }
      is_space = true;
      is_word = false;
    }
  }

  std::cout << word_count << "\n";
}
