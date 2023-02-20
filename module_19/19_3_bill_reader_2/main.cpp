#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::cout << "19.3 Bill reader 2" << std::endl;

    std::ifstream bill;
    bill.open("bill.txt");

    std::string name;
    std::string surname;
    int salary;
    std::string date;

    int sum = 0;
    int max = 0;
    std::string max_salary_name;
    std::string max_salary_surname;

    if (bill.is_open()){
        while(bill >> name){//проверяем значение, возвращаемое при считывании (объект типа istream)
            bill >> surname >> salary >> date;
            sum+= salary;
            if(max < salary) {
                max = salary;
                max_salary_name = name;
                max_salary_surname = surname;
            }
        }
        std::cout << "Sum of all salaries is " << sum << std::endl;
        std::cout << max_salary_name << " " << max_salary_surname << " gets the highest salary " << std::endl;
    }else{
        std::cout << "Error opening file";
    }
    bill.close();
    return 0;
}
