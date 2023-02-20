#include <iostream>

int main() {
  std::cout << "Задача 4. Аккуратность\n";

  float row_f, col_f = .0f;
  std::cout << "Введите местоположение фигуры: ";
  std:: cin >> row_f >> col_f;

  row_f *= 10;
  col_f *= 10;
  float correction_row =  (0.50f - row_f + (int) row_f)/10;
  float correction_col =  (0.50f - col_f + (int) col_f)/10;

  std::cout << "Фигура находится в клетке (" << (int) row_f << ", " << (int)col_f << ").\n";
  std::cout << "Поправьте положение фигуры на (" << correction_row << ", " << correction_col << ")\n";

}
