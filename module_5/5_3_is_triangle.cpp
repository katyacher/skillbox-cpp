#include <iostream>

int main() {
  std::cout << "Задача 3. Треугольник.\n";

  int a,b,c;
  std::cout << "Введите длины сторон предполагаемого треугольника(a,b,c): ";
  std::cin >> a >> b >> c;

  if ((a+b)<=c || (a+c)<+b ||(b+c)<=a){
    std::cout << "Треугольник со сторонами "<< a <<" "<< b << " " << c << " не существует";
  } else {
     std::cout << "Треугольник существует";
  }
}
