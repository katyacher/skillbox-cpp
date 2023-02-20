#include <iostream>

int main() {
  std::cout << "Задача 11. Треугольник Паскаля.\n";

  int height = 0;
	std::cout << "Задайте высоту треугольника Паскаля: ";
	std::cin >> height;

  if (height <= 0) {
    std::cout << "Ошибка: высота треугольника должна быть положительным числом.\n";
  } else {
    for (int row = 1; row <= height; row++) { // Цикл по строкам
      int number = 1; // крайняя единица
      for (int col = 1; col < (height - row + 1); col++) { // Пропуск нужного количества пробелов в начале строки
        std::cout << " ";
      }

      for (int col = 1; col <= row; col++) {
        std::cout << number << " ";
        number = number * (row - col) / col; // Вывод чисел
      }

      std::cout << "\n";
    }
  }
}
