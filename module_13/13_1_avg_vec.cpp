#include <iostream>
#include <vector>

int main() {
  std::cout << "Пользователь вводит с клавиатуры число n, а затем -- n целых чисел. Необходимо вычислить их среднее арифметическое и вывести на экран.\n";

  int N;
  std::cout << "How many elements do you want? ";
  std::cin >> N;
  std::vector<int> vec(N);

  for(int i = 0; i < N; i++){
    std::cin >> vec[i];
  }

  float sum = 0;
  for(int i = 0; i < N; i++){
    sum += vec[i];
  }
  float avg = sum/N;
  std::cout << "Average = " << avg << std::endl;
}
