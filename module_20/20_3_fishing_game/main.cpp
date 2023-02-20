#include <iostream>
#include <string>
#include <fstream>

int main() {
  std::cout << "20.3 Simulation of the game 'Fishing' \n";
  std::string my_fish;
  std::string fish_in_river;

  std::cout << "Start the game" << std::endl;
  
  std::string answer = "y";
  int fishcounter = 0;
  int pos = 0;
  
  std::ofstream basket("basket.txt", std::ios::app);
  std::ifstream river("river.txt");
  
  while(answer == "y"){
    std::cout << "What kind of fish do you want to catch? : ";
    std::cin >> my_fish;

    if (!river.is_open()){
      std::cout << "Error opening file" << std::endl;
    } else{
      while(!river.eof() && fish_in_river != my_fish){
        river.seekg(pos);
        getline(river, fish_in_river);
        pos = river.tellg();
        if(fish_in_river == my_fish){
          if(!basket.is_open()){
            std::cout << "Error opening file" << std::endl;
          } else {
            basket << my_fish << std::endl;
            std::cout << "You caught a fish!" << std::endl;
            fishcounter++;
          }
        }
      }
    }
    std::cout << "Continue the game? y/n: ";
    std::cin >> answer;
  }
  
  river.close();
  basket.close();
  
  std::cout << "You caught " << fishcounter << " fish."; 
}
