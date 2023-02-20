#include <iostream>

std::string convert(int digit, char min, char mid, char max);

int main() {
  std::cout << "5. From ordinary numbers to roman numbers\n";

  std::cout << "Input an integer number from 1 to 3999: ";
  int number = 0;
  std::cin >> number;

  while(number < 1 || number > 3999){
    std::cout << "Error. Try again. Input a number: \n";
    std::cin >> number;
  }

  int thousend = number/1000;
  int hundred = number%1000/100;
  int tens = number%100/10;
  int unit = number%10;
  
  std::string result;
  result = convert(thousend, 'M','M','M');
  result += convert(hundred, 'C','D','M');
  result += convert(tens, 'X','L','C');
  result += convert(unit, 'I','V','X');

  std::cout << result;

}

std::string convert(int digit, char min, char mid, char max){
  std::string roman;
  if (digit == 4 || digit == 9) roman += min;
  if (digit >= 4 && digit <=8) roman += mid;
  if (digit == 9) roman += max;
  if (digit%5 < 4){
    for(int i = 0; i < digit%5; i++){
      roman+= min;
    }  
  }
  return roman;
}

