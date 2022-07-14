#include <iostream>
#include <fstream>
#include <vector>
#include <string>>


int main() {
  std::cout << "19.3 Bill reader" << std::endl;

  std::ifstream bill;// bill - ведомость
  bill.open("bill.txt");
  
  std::string record;
  std::string name;
  int salary;
  std::string date;
  
  std::vector<std::string>records;
  if (bill.is_open()){
      while(!bill.eof()){
        bill >> record;
        records.push_back(record);
      }
    
    int sum = 0;
    for(int i = 0; i < records.size(); i++){
      std::cout << records[i] << std::endl;
    }
    /*std::cout << "Sum of all salaries is " << sum << std::endl;*/
  }else{
    std::cout << "Error opening file";
  }
  bill.close();
  return 0;
}
