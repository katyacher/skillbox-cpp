#include <iostream>
#include <string>
#include <fstream>

int main() {
  std::cout << "19.5 The game “What? Where? When?" << std::endl;
  
  unsigned int cursor = 1;
  unsigned int offset = 0;
  int player_points = 0;
  int tv_viewer_points = 0;

  std::string qst_file_name = "questions.txt";
  std::string ans_file_name = "answers.txt";

  bool played_sectors[13];
  for (int i = 0; i < sizeof(played_sectors); i++){
    played_sectors[i] = false;
  }

  while(true){
    std::cout << "Enter the offset: " ;
    std::cin >> offset;
    while(offset < 0){
      std::cout << "offset must be greater than or equal to zero. Try again: ";
      std::cin >> offset;
    }
    
    cursor+= offset%13;
    if(cursor > 13){
      cursor-=13;
    }
  
      //если номер сектора уже выпадал, то берем следующий номер 
      for(int i = 0; i < sizeof(played_sectors); i++){
        if(cursor == i+1){
          if (played_sectors[i] == false){
            played_sectors[i] = true;
            break;
          } else {
            cursor++;
          }
        } 
      }
      std::cout << "Sector " << cursor << " plays." << std::endl;
    }

    std::ifstream file;
    std::string question, answer;

    file.open(qst_file_name);
    if(file.is_open()){
      file.seekg(cursor);
      getline(file, question);
      std::cout << "The quastion is: "<< std::endl;
      std::cout << question << std::endl;
    } else {
      std::cout << "Error opening file." << std::endl;
    }
    file.close();

    file.open(ans_file_name);
    if(file.is_open()){
      file.seekg(cursor);
      std::cout << "Your answer : ";
      std::cin >> answer;
      std::string ans;
      file >> ans;
      if(ans == answer){
        std::cout << "Correct!" << std::endl;
        player_points++;
      } else {
        std::cout << "Incorrect. Points go to the viewer." << std::endl;
        tv_viewer_points++;
      }
    } else {
      std::cout << "Error opening file." << std::endl;
    }
    file.close();

    if(player_points >=6) {
      std::cout << "Player win!";
      return 0;
    }
    if(tv_viewer_points >=6) {
      std::cout << "Tv_viwers win!";
      return 0;
    }
}
}
