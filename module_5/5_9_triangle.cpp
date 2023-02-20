#include <iostream>

int main() {
  std::cout << "Задача 9. Треугольник на координатной плоскости.\n\n";

  int x1, y1 = 0;
  int x2, y2 = 0;
  int x3, y3 = 0;

  std::cout << "Введите координаты первой точки:\n";
  std::cin >> x1 >> y1;
  std::cout << "Введите координаты второй точки:\n";
  std::cin >> x2 >> y2;
  std::cout << "Введите координаты третьей точки:\n";
  std::cin >> x3 >> y3;

  if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x1 == x3 && y1 == y3)) {
    // Если хоть одна пара точек совпадает
    std::cout << "No\n";
  } else if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)){ 
    // Условие, что три точки лежат на одной прямой - (x2-x1)/(y2-y1)=(x3-x1)/(y3-y1) - преобразуем в равенство произведений - (x2-x1)(y3-y1) = (x3-x1)(y2-y1)
    std::cout << "No\n"; 
  } else {
    std::cout << "Yes\n";
  }

}
