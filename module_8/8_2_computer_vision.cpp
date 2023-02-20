#include <iostream>

int main() {
  std::cout << "Задача 2. Компьютерное зрение\n";

  float row_f, col_f = .0f;
  std::cout << "Введите местоположение фигуры: ";
  std:: cin >> row_f >> col_f;

  row_f *= 10;
  col_f *= 10;

  std::cout << "Фигура находится в клетке (" << (int) row_f << ", " << (int)col_f << ").";

}
