#include <iostream>
int ans;

int evendigits(long long n, int ans){
  return (n == 0)? ans : ((((n%10)%2) == 0)? evendigits( n/10, ans+=1) : evendigits( n/10, ans));
}

int main() {
  std::cout << "18.4 even digits\n";
  ans = 0;
  long long n = 9223372036854775806;
  std::cout << evendigits(n, ans);
}

