#include <iostream>
#include <vector>

std::vector<int> add(std::vector<int> vec,int val, int position){
  std::vector<int> newVec(vec.size() + 1);
  for(int i = 0; i < position; i++)
    newVec[i] = vec[i];
  newVec[position] = val;
  for(int i = position; i < vec.size(); i++)
    newVec[i + 1] = vec[i];

  return newVec;
}

int main() {
  std::cout << "Улучшите электронную очередь для роботов. К нам приходят роботы разного социального статуса. Каждый робот вводит не только свой уникальный номер, но и свое место в очереди. Например, пусть в нашей очереди 10 роботов и к нам приходит 11-й. Сначала он вводит свой номер, как и раньше, а затем свое место в очереди - например, 5. В этом случае он должен оказаться в очереди пятым, а все остальные, начиная со старого пятого - подвинуться дальше в конец очереди.Реализуйте функцию std::vector<int> add_to_position(std::vector vec, int val, int position).\n";

  std::vector<int> vec = {1,2,4,75};

  int num = 0;
  int pos = 0;
  while(num != -1){
    std::cout << "Please enter your number and position: ";
    std::cin >> num >> pos;

    vec = add(vec,num, pos);
  }
  
  for(int i = 0; i < vec.size(); i++){
    std::cout << vec[i] << " ";
  }
}
