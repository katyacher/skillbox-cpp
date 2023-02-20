#include <iostream>

void reverse_arr_by_ref(int (&Array)[10]){
  int size = sizeof(Array)/ sizeof(*Array);
  for(int i = 0; i < size/2; i++){
    int temp = Array[i];
    Array[i] = Array[size - 1 -i];
    Array[size - 1 -i] = temp;
  }
}

void reverse_arr_by_ptr(int* Array, int size){
  for(int i = 0; i < size/2; i++){
    int temp = Array[i];
    Array[i] = Array[size - 1 - i];
    Array[size - 1 -i] = temp;
  }
}

void print_arr(int * Array, int size){
  for(int i = 0; i < size; ++i){
    std::cout << Array[i] << " ";
  }
}

int main() {
  std::cout << "17.2 Revers array " << std::endl << std::endl;
  /* Написать функцию, которая принимает указатель на тип int, 
  по которому размещены 10 переменных типа int.
  Функция ничего не возвращает, но по тому же указателю элементы 
  должны лежать в обратном порядке.*/

  int array[10] = {0,1,2,3,4,5,6,7,8,9};
  int size = sizeof(array)/sizeof(array[0]);
  
  std::cout << "array = ";
  print_arr(array, size);

  reverse_arr_by_ref(array);
  std::cout << std::endl << "array in reverse order by ref = ";
  print_arr(array, size);
  
  reverse_arr_by_ptr(array, size);
  std::cout << std::endl << "array in reverse order by ptr = ";
  print_arr(array, size);
  
}
