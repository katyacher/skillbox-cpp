#include <iostream>

int main() {
  std::cout << "Задача 8. Зарплата необязательна.\n\n";

  std::cout << " Зарплата первого сотрудника: "; 
  int salary1 = 0;
  std::cin >> salary1;

  std::cout << " Зарплата второго сотрудника: "; 
  int salary2 = 0;
  std::cin >> salary2;

  std::cout << " Зарплата третьего сотрудника: "; 
  int salary3 = 0;
  std::cin >> salary3;

  int maxSalary = std::max(std::max(salary1,salary2), salary3);
  std::cout << " Самая высокая зарплата отдела маркетинга: " << maxSalary << "\n"; 

  int minSalary = std::min(std::min(salary1,salary2), salary3);
  std::cout << " Самая низкая зарплата отдела маркетинга: " << minSalary << "\n"; 

  int averageSalary  =  (salary1 + salary2 + salary3)/3;
  std::cout << " Средняя зарплата отдела маркетинга: " << averageSalary << "\n"; 

}
