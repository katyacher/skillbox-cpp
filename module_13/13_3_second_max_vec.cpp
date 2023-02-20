#include <iostream>
#include <vector>

int main() {
  std::cout << "Пользователь вводит с клавиатуры число n, а затем -- n целых чисел. Необходимо отыскать второе по величине из этих чисел и вывести на экран.\n";

  int N;
  std::cout << "How many elements do you want? ";
  std::cin >> N;
  std::vector<int> vec(N);

  for(int i = 0; i < N; i++){
    std::cin >> vec[i];
  }

  int max = vec[0];
  int second_max = vec[0]; 

  for(int i = 0; i < N; i++){
    if(vec[i] > max){
      second_max = max; 
      max = vec[i];
    }
  }
  
  std::cout << "Max: "<< max << std::endl;
  std::cout << "Second max: " << second_max << std::endl;
}
