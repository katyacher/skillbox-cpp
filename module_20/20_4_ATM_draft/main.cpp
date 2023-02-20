#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::srand(std::time(nullptr));
  std::cout << "20.4 ATM \n";
  std::cout << "Fill the ATM (enter '+')" << std::endl;
  /*std::cout << "Withdraw money - enter '-': ";
  std::string answer;
  std::cin >> answer;*/

  int buffer[1000];

  /* if (answer == "+") {*/
  int nominal[] = {100, 200, 500, 1000, 2000, 5000};
  int cash[1000];
  for (int i = 0; i < sizeof(cash) / sizeof(int); i++) {
    cash[i] = nominal[std::rand() % 6];
  }

  std::ofstream atm_in("atm.bin", std::ios::binary);
  if (atm_in.is_open()) {
    atm_in.write((char *)cash, sizeof(cash));
  } else {
    std::cout << "Error opening file" << std::endl;
  }

  atm_in.close();

  std::ifstream atm_out("atm.bin", std::ios::binary);
  if (atm_out.is_open()) {
    int buffer[1000];
    atm_out.read((char *)buffer, sizeof(buffer));
    for (int i = 0; i < sizeof(buffer) / sizeof(int); i++) {
      std::cout << buffer[i] << std::endl;
    }

    int nominals_count[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < sizeof(buffer) / sizeof(int); i++) {
      if (buffer[i] == 100)
        nominals_count[0]++;
      else if (buffer[i] == 200)
        nominals_count[1]++;
      else if (buffer[i] == 500)
        nominals_count[2]++;
      else if (buffer[i] == 1000)
        nominals_count[3]++;
      else if (buffer[i] == 2000)
        nominals_count[4]++;
      else if (buffer[i] == 5000)
        nominals_count[5]++;
    }
    for (int i = 0; i < 6; i++) {
      std::cout << nominals_count[i] << " ";
    }

    std::cout << "Enter the sum: ";
    int sum = 0;
    std::cout << ":\n";
    std::cin >> sum;
    int nominals_count_in_sum[] = {
        0, 0, 0, 0, 0, 0,
    };
    if (sum % 100 != 0) {
      std::cout << "Выдать ровно " << sum
                << " рублей невозможно. Введите сумму, кратную 100:\n";
      std::cin >> sum;
    }

    if (sum >= 5000) {
      nominals_count_in_sum[5] = sum / 5000;
      sum = sum % 5000;
    }
    if (sum >= 2000) {
      nominals_count_in_sum[4] = sum / 2000;
      sum = sum % 2000;
    }
    if (sum >= 1000) {
      nominals_count_in_sum[3] = sum / 1000;
      sum = sum % 1000;
    }
    if (sum >= 500) {
      nominals_count_in_sum[2] = sum / 500;
      sum = sum % 500;
    }
    if (sum >= 200) {
      nominals_count_in_sum[1] = sum / 200;
      sum = sum % 200;
    }
    if (sum >= 100) {
      nominals_count_in_sum[0] = sum / 100;
      sum = sum % 100;
    }
    for (int i = 0; i < 6; i++) {
      std::cout << nominals_count_in_sum[i] << " ";
    }

    for (int i = 0; i < 6; i++) {
      nominals_count[i] -= nominals_count_in_sum[i];
    }

    for (int i = 0; i < 6; i++) {
      std::cout << nominals_count[i] << " ";
    }

  } else {
    std::cout << "Error opening file" << std::endl;
  }
  atm_out.close();
  /* } else if (answer == "-") {



   } else {
     std::cout << "Unknown operation." << std::endl;
   }
 */
  return 0;
}
/*
void fillATM(){
  std::ifstream atm ("atm.txt");
}*/
