#include #include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct records{
    std::string name = "unknown";
    std::string surname = "unknown";
    int salary = 0;
    std::string date = "unknown";
  };

int sum(std::vector<records> rec){
  int sum = 0;
    for(int i = 0; i < rec.size(); i++){
      sum+= rec[i].salary;
    }
  return sum;
}

std::string get_name_max_salary(std::vector<records> rec){
  std::string name_max;
  int max = rec[0].salary;
  for(int i = 1; i < rec.size(); i++){
    if(max < rec[i].salary){
      max = rec[i].salary;
      name_max = rec[i].name + " " + rec[i].surname;
    }
  }
  return name_max;
}

int main() {
  std::cout << "19.3 Bill reader" << std::endl;

  std::ifstream bill;// bill - ведомость
  bill.open("bill.txt");

  std::vector<records>records_vec;
  
  if (bill.is_open()){
    while(!bill.eof()){
      records record;
      bill >> record.name >> record.surname >> record.salary >> record.date;
      std::cout << record.name << " " << record.surname << " " << record.salary << " "  << record.date << std::endl;
      records_vec.push_back(record);
    }
    std::cout << std::endl;
    std::cout << "Sum of all salaries is " << sum(records_vec) << std::endl;
    std::cout << get_name_max_salary(records_vec) << " gets the highest salary " << std::endl;
  }else{
    std::cout << "Error opening file";
  }
  bill.close();
  return 0;
}
