#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "date_checker.h"//validate_date()

void write_to_statement(std::string file_name); 
void show_statement(std::string file_name);

int main() {
  std::cout << "19.5 Implementation of an entry in the statement.\n";

  std::string file_name = "statement.txt";

  while (true) {
    std::cout << std::endl << "Select menu item: " << std::endl;
    std::cout << "1 - Make an entry in the statement" << std::endl;
    std::cout << "2 - View the contents of the statement" << std::endl;
    std::cout << "3 - Exit the program" << std::endl;

    int menu;
    std::cin >> menu;

    switch (menu) {
    case 1:
      write_to_statement(file_name);
      break;
    case 2:
      show_statement(file_name);
      break;
    case 3:
      std::cout << "Exit" << std::endl;
      return 0;
    default:
      std::cout << "There is no such menu item." << std::endl;
      break;
    }
  }
}

void write_to_statement(std::string file_name) {
  std::ofstream file;
  file.open(file_name, std::ios::app);

  std::string name, surname, date;
  double salary;

  if (file.is_open()) {
    std::cout << "Enter data " << std::endl;
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Surname: ";
    std::cin >> surname;
    std::cout << "Date in format DD.MM.YYYY: ";
    std::cin >> date;
    while (!validate_date(date)) {
      std::cout << "Incorrect date." << std::endl;
      std::cout << "Enter date in format DD.MM.YYYY: ";
      std::cin >> date;
    }
    std::cout << "Salary: ";
    std::cin >> salary;
    std::stringstream record;
    record << name << " " << surname << " " << date << " " << salary;
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
    std::string record;
    while (!file.eof()) {
      getline(file, record);
      std::cout << record << std::endl;
    }
  } else {
    std::cout << "Error opening file." << std::endl;
  }
  file.close();
}