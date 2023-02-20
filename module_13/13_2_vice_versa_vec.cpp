#include <iostream>
#include <vector>

int main() {
  std::cout << "Пользователь вводит с клавиатуры число n, а затем -- n действительных (дробных) чисел. Необходимо вывести их все в обратном порядке (то есть сначала то число, которые пользователь ввёл последним и так далее).\n";

  int N;
  std::cout << "How many elements do you want? ";
  std::cin >> N;
  std::vector<float> vec(N);

  for(int i = 0; i < N; i++){
    std::cin >> vec[i];
  }

  for(int i = N; i >= 0; i--){
    std::cout << vec[i] << std::endl;
  }
  
}
