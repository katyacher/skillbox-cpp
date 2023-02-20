#include <iostream>
#include <string>

using namespace std;

int main() {
  std::cout << "16.4 Mechanical piano\n";
  
  enum note
  {
    DO = 1,//00000001 = 1  2^0
    RE = 2,//00000010 = 2   2^1
    MI = 4,//00000100 = 3    2^2
    FA = 8,//00001000 = 4    2^3
    SOL = 16,//00010000 = 5  2^4
    LA = 32,//00100000 = 6  2^5
    SI = 64//01000000 = 7   2^6
  };

  std::string melody[12];
  
  std::cout << "Play piano. Enter the combination of notes ";
  std::cout << "(the number consists of digits 1 - 7): " << std::endl;
  
  for(int i = 0; i < 12; i++){
    std::getline(std::cin, melody[i]);
  }

  for(int i = 0; i < 12; i++){
    for(int j = 0;j < melody[i].length();j++){
      char note = melody[i][j];
      int i_note = 1 << (std::atoi(&note) - 1);

      if (i_note & DO){
        std::cout << "DO ";
      }
      else if (i_note & RE){
        std::cout << "RE ";
      }
      else if (i_note & MI){
        std::cout << "MI ";
      }
      else if (i_note & FA){
        std::cout << "FA ";
      }
      else if (i_note & SOL){
        std::cout << "SOL ";
      }
      else if (i_note & LA){
        std::cout << "LA ";
      }
      else if (i_note & SI){
        std::cout << "SI ";
      }
    }
    std::cout <<std::endl;
  }
}
