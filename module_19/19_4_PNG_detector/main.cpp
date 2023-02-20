#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::cout << "19.4 PNG Detector" << std::endl;
        /* Заголовок файла PNG всегда описывается фиксированными байтами: 89h 50h 4Eh 47h 0Dh 0Ah 1Ah 0Ah. Первый байт png файла представляет собой 8-битовое значение 89h (137 в виде десятичного числа или -119 в виде десятичного числа от знакового дополнения до 2х), указывающее на то, что файл содержит бинарные данные (число 89h выходит за пределы диапазона символов ASCII - это предотвращает обработку некоторыми программами PNG-файлов как текстовых файлов. Байты 2—4 содержат символы "PNG"*/ 

  std::cout << "Enter file path : ";
  std::string file_path;
  std::cin >> file_path;

  std::string substr = file_path.substr(file_path.length() - 4, 4);
  
  if((substr == ".PNG") || (substr == ".png")){
    std::cout << "It looks like a PNG file, let's try to open it..." << std::endl;
    
    std::ifstream file;
    file.open(file_path, std::ios::binary);
    
    if (file.is_open()){
      char value;// вместо value[1] - нам не нужен массив char, достаточно одного символа
      file.read(&value, sizeof(value));
      
      char buf[4];
      file.read(buf, sizeof(buf));
      buf[3] = 0;
      
      if(((int)value == -119) && (std::string(buf) == "PNG")){
        std::cout << "It's really a PNG file!" << std::endl;
      }else {
        std::cout << "Unfortunately this is not a PNG file." << std::endl;
      }
    } else {
       std::cout << "Error opening file";
    }
  file.close();
  } else {
    std::cout<< "Invalid file extension!" << std::endl;
  }
  return 0;
}
