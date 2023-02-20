#include <iostream>

int main() {
  std::cout << "Задача 2. ЗОЖ\n";

  float protein_per_100_g, carbohydrates_per_100_g = .0f;
  float netto = .0f;

  std::cout << "Сколько белков в 100 гр продукта: ";
  std::cin >> protein_per_100_g;
  std::cout << "Сколько углеводов в 100 гр продукта: ";
  std::cin >> carbohydrates_per_100_g;
  std::cout << "Масса нетто продукта: ";
  std::cin >> netto;

  float protein = netto * protein_per_100_g/100;
  float carbohydrates = netto * carbohydrates_per_100_g/100;

  std::cout << "В продукте белков: " << protein << "\n";
  std::cout << "углеводов: " << carbohydrates;

}
