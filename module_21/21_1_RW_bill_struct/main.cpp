#include <iostream>
#include <fstream>
#include <iostream>
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

int main() {
  std::cout << "Implementation of the accounting sheet" << std::endl;
  
  std::string file_name = "statement.txt";
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
  std::ofstream file;
  file.open(file_name, std::ios::app);

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

    std::stringstream record;
    record << person.name << " " << person.surname << " " << person.date << " " << person.salary;
    file << record.str() << std::endl;
  } else {
    std::cout << "Error opening file." << std::endl;
  }
  file.close();
};

void show_statement(std::string file_name) {
  std::ifstream file;
  file.open(file_name);
  if (file.is_open()) {
    std::vector <employee> persons;
    employee person;
    while (file >> person.name) {
      file >> person.surname >> person.date >> person.salary;
      persons.push_back(person);
    }
    for(int i = 0; i < persons.size(); i++){// TODO  итератор? цикл for_each()?
      std::cout << persons[i].name << " ";
      std::cout << persons[i].surname << " ";
      std::cout << persons[i].date << " ";
      std::cout << persons[i].salary << std::endl;
    }
  } else {
    std::cout << "Error opening file." << std::endl;
  }
  file.close();
}
