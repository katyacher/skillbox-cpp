#include <iostream>

int main() {
  std::cout << "Задача 6. Усложнение задачи про кирпич.\n";

  int a;
  int b;
  int c;
  std::cout << "Введите размер кирпича: \n";
  std::cin >> a >> b >> c; 

  int m;
  int n;
  int k;
  std::cout << "Введите размер коробки: \n";
  std::cin >> m >> n >> k; 

  if (((a <= m && b <=n ) || (a <= n && b <=m)) && (c <= k)) {
    std::cout << "Можно\n";
  } else if (((b <= m && c <= n) || (b <= n && c <= m)) &&  (a <= k)) {
    std::cout << "Можно\n";
  } else if (((a <= m && c <=n) || (a <= n && c <=m)) && (b <= k)){
    std::cout << "Можно\n";
  } else {
     std::cout << "Нельзя\n";
  }
  
}
