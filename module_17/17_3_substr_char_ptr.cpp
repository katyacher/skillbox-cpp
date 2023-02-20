#include <iostream>
#include <vector> 
#include <cstring>

bool substr(char* str, char* substr){ // Алгоритм Кнута_Морриса_Пратта
  int i, j;
  int str_len = std::strlen(str);
  int substr_len = std::strlen(substr);
  
  // Вычисление префикс-функции
  std::vector<int> pf (substr_len);
  pf[0] = 0;
  
  for (i = 1, j = 0; i < substr_len; ++i) {
    while ((j > 0) && (substr[i] != substr[j]))
      j = pf[j-1];
      if (substr[i] == substr[j]) j++;
      pf[i] = j;
    }

  // Поиск
  for ( i = 0, j = 0; i < str_len; ++i) {
    while ((j > 0) && (substr[j] != str[i]))
      j = pf[j-1];

    if (substr[j] == str[i]) 
      j++;

    if (j == substr_len){
      return true;
    }
  }
  return false;
}
int main() {
  std::cout << "17.3 Substr char *" << std::endl;
/*Написать функцию, которая принимаем указатель на char, по которому лежит строка.
Функция должна возвращать true, если вторая строка является подстрокой первой. */

  char* a = "Hello world";
  char* b = "wor";
  char* c = "banana";

  std::cout << substr(a,b) <<  " " << substr(a,c) << std::endl;

  return 0;
}

