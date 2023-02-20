#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::cout << "19.1 Development of a program for searching words in a file" << std::endl;
    int found = 0;
    std::ifstream words;
    words.open("words.txt");
  
    if (words.is_open()){
      std::cout << "What word are you looking for? " << std::endl;
      std::string word;
      std::cin >> word;
      while (!words.eof()){
        std::string f_word;
        words >> f_word;
        if(f_word == word){
            found++;
        }
      }
      std::cout << "The word occurs " << found << " times in the text";                 std::cout << std::endl;
    }else{
      std::cout << "Error opening file";
    }
    words.close();
    return 0;
}

