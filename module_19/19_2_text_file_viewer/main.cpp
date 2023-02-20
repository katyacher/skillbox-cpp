#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::cout << "19.2 Developing a Text File Viewer" << std::endl;
  
  const int n = 20;
  char buffer[n];
  
  std::ifstream file;
  file.open("words.txt", std::ios::binary);

  int pos = 0;
  if (file.is_open()){
    while(!file.eof()){
      file.read(buffer, sizeof(buffer) - 1); // колличество считываемых в буфер данных на один символ меньше, чтобы записать в конец буфера \0  для вывода на печать как строку (cout << buffer)
      pos = file.gcount();
      buffer[pos] = 0;
      std::cout << buffer;
    }    
  } else {
    std::cout << "Error opening file";
  }
  file.close();
  return 0;
}


