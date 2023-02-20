#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <vector>
int main() {
  int nominal[] = {100, 200, 500, 1000, 2000, 5000};
  std::ifstream bank("bank.bin", std::ios::binary);
  
  if(!bank.is_open()){
    std::cerr << "Incorrect path: bank.bin\n";
    return 1;
  }
  int mas[1000];
  bank.read((char*)mas, sizeof(mas));
  bank.close();
  
  const int numberBills = sizeof(mas) / sizeof(mas[0]);//1000
  std::cout << numberBills << std::endl;
  const int numberSpecies = sizeof(nominal) / sizeof(nominal[0]);//
   std::cout << numberBills << std::endl;
  
  std::cout << "Welcome to the bank!\nWhat operation do you want to perform? ";
  char operation;
  std::cin >> operation;
  
  if(operation != '+' && operation != '-'){
    std::cerr << "Error data!\n";
    return 2;
  }
  if(operation == '+'){
    for(int i = 0; i < numberBills; ++i){
      if(mas[i] == 0){
        mas[i] = nominal[std::rand() % 6];
      }
    }
  }else{
    std::cout << "How much do you want to withdraw money? ";
    int number;
    std::cin >> number;
    if(number % 100 != 0){
      std::cerr << "Error data: " << number << std::endl;
      return 3;
    }
    std::vector<int> numbers(numberSpecies + 1, 0); //число купюр каждого номинала
    std::vector<int> miracle(numberSpecies + 1, 0); //дубликат, с которым буду работать
    std::sort(mas, mas + numberBills); //сортировка по возрастанию
    for(int i = 0; i < numberBills; ++i){
      if(mas[i] == 5000) ++numbers[6];
      else if(mas[i] == 2000) ++numbers[5];
      else if(mas[i] == 1000) ++numbers[4];
      else if(mas[i] == 500) ++numbers[3];
      else if(mas[i] == 200) ++numbers[2];
      else if(mas[i] == 100) ++numbers[1];
      else ++numbers[0];
    }
    for (int i = 0; i < 1000; i++) {
        std::cout << mas[i] << " ";
    }
    for(int i = numberSpecies - 1;; --i){  
      int cnt = 0;
skip:
      if(cnt == i) continue;
      for(int j = 0; j < numbers.size(); ++j) miracle[j] = numbers[j];
      int balance = number;
      std::cout << balance << std::endl;
      if(miracle[i + 1] == 0 || balance < nominal[i]) continue;
      do{
        balance -= nominal[i];
        --miracle[i + 1];
        ++miracle[0];
      }while(!(miracle[i + 1] == 0 || balance < nominal[i]));
      for(int j = i - cnt - 1; j >= 0; --j){
        while(!(miracle[j + 1] == 0 || balance < nominal[j])){
          balance -= nominal[j];
          --miracle[j + 1];
          ++miracle[0];
        }
      }
      if(i == 0) break;
      if(balance != 0){
        ++cnt;
        goto skip;
      }else{
        std::cout << "You have withdrawn " << number << std::endl;
        number = balance;
        break;
      }
    }
    if(number != 0) std::cout << "Operation is not possible!";
    int j = 0;
    for(int i = 0; i <= numberSpecies; ++i){
      for(int k = 1; k <= miracle[i]; ++k){
        if(i == 0) mas[j] = 0;
        else mas[j] = nominal[i - 1];
        ++j;
      }
    }
  }
  std::ofstream out("bank.bin", std::ios::binary);
  if(!out.is_open()){
    std::cerr << "Incorrect path: bank.bin\n";
    return 1;
  }
  out.write((char *) mas, sizeof(mas));
  out.close();
  return 0;
}
