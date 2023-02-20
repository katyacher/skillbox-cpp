#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "date_checker.h"//validate_date()

struct employee {
  std::string name;
  std::string surname;
  std::string date;
  double salary = 0;
};

void write_to_statement(std::string file_name); 
void show_statement(std::string file_name);
void write_employee(std::ofstream& file, employee& person);
void load_employee(std::ifstream& file, employee& person);
void print_employee(employee &person);

int main() {
  std::cout << "Implementation of the accounting sheet" << std::endl;
  
  std::string file_name = "statement.bin";
  std::string command;
  
  std::cout << std::endl << "Select the command: " << std::endl;
  std::cout << "add - Make an entry in the statement" << std::endl;
  std::cout << "list - View the contents of the statement" << std::endl;
  
  std::cin >> command;
  if (command == "add") {
     write_to_statement(file_name);
  } else if (command == "list"){
     show_statement(file_name);
  } else {
     std::cout << "There is no such command." << std::endl;
  }
}

void write_to_statement(std::string file_name) {
  std::ofstream file(file_name, std::ios::binary|std::ios::app);

  if (file.is_open()) {
    employee person;
    std::cout << "Enter data " << std::endl;
    std::cout << "Name: ";
    std::cin >> person.name;
    std::cout << "Surname: ";
    std::cin >> person.surname;
    std::cout << "Date in format DD.MM.YYYY: ";
    std::cin >> person.date;
    while (!validate_date(person.date)) {
      std::cout << "Incorrect date." << std::endl;
      std::cout << "Enter date in format DD.MM.YYYY: ";
      std::cin >> person.date;
    }
    std::cout << "Salary: ";
    std::cin >> person.salary;

    write_employee(file, person);
    
  } else {
    std::cout << "Error opening file." << std::endl;
  }
  file.close();
};

void show_statement(std::string file_name) {
  std::ifstream file(file_name, std::ios::binary);
  employee person;
  
  if (file.is_open()) {
    int name_len;
    while (!file.eof() && file.read((char*)&name_len, sizeof(name_len))) {
      person.name.resize(name_len);
      file.read((char*)person.name.c_str(), name_len);
    
      int surname_len;
      file.read((char*)&surname_len, sizeof(surname_len));
      person.surname.resize(surname_len);
      file.read((char*)person.surname.c_str(), surname_len);
    
      int date_len; 
      file.read((char*)&date_len, sizeof(date_len));
      person.date.resize(date_len);
      file.read((char*)person.date.c_str(), date_len);
    
      file.read((char*)&person.salary, sizeof(person.salary));
        
      print_employee(person);
    }  
  } else {
    std::cout << "Error opening file." << std::endl;
  }
  
  file.close();
}

void write_employee(std::ofstream& file, employee& person){
  int name_len = person.name.length();
  file.write((char*)&name_len, sizeof(name_len));
  file.write(person.name.c_str(), name_len);
  int surname_len = person.surname.length();
  file.write((char*)&surname_len, sizeof(surname_len));
  file.write(person.surname.c_str(), surname_len);
  int date_len = person.date.length();
  file.write((char*)&date_len, sizeof(date_len));
  file.write(person.date.c_str(), date_len);
  file.write((char*)&person.salary, sizeof(person.salary));
}

void print_employee(employee& person){
  std::cout << person.name << " ";
  std::cout << person.surname << " ";
  std::cout << person.date << " ";
  std::cout << person.salary << std::endl;
}