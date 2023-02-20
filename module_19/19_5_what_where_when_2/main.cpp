#include <iostream>
#include <string>
#include <fstream>

class FileAccessor {
  private:
    std::ifstream file;
  public:
    explicit FileAccessor(std::string f_name){
      file.open(f_name);
    }

    bool is_opened(){
      if(!file.is_open()) {
        return false;
      } else {
        return true;
      }
    }

    std::string  operator[](int line_number) {
      std::string str;
      file.seekg(0);
      for (int i = 0; i < line_number; i++) {
        getline(file, str);
      }
      return str;
    }

    ~FileAccessor(){
      file.close();
    }
};

int main() {
  std::cout << "19.5 The game “What? Where? When?" << std::endl;

  int cursor = 1;
  int offset = 0;
  int player_points = 0, tv_viewer_points = 0;
  std::string qst_file_name = "questions.txt";
  std::string ans_file_name = "answers.txt";

  bool played_sectors[13];
  for (int i = 0; i < sizeof(played_sectors); i++){
    played_sectors[i] = false;
  }

  FileAccessor questions(qst_file_name);
  if(!questions.is_opened()){
      std::cout << "Game stopped" << std::endl;
      std::cout << "Error opening file with questions!" << std::endl;
      return 0;
  }

  FileAccessor answers(ans_file_name);
  if(!answers.is_opened()){
      std::cout << "Game stopped" << std::endl;
      std::cout << "Error opening file with answers!" << std::endl;
      return 0;
  }

  std::cout << "Sector " << cursor << " starts." << std::endl;
  
  while(true){
    std::cout << "Enter the offset: ";
    std::cin >> offset;

    while(offset < 0){
      std::cout << "offset must be greater than zero. Try again: ";
      std::cin >> offset;
    }

    cursor += offset % 13;
    if (cursor > 13) {
        cursor -= 13;
    }

    for(int i = 0; i < sizeof(played_sectors); i++){
      if(cursor == i+1){
        if (!played_sectors[i]){
          played_sectors[i] = true;
          break;
        } else {
          std::cout << "Sector " << cursor << " is already played." << std::endl;
          cursor++;
        }
      }
    }
    
    std::cout << "Sector " << cursor << " plays." << std::endl;

    std::cout << questions[cursor] << std::endl;

    std::cout << "Your answer : ";
    std::string your_answer;
    std::cin >> your_answer;

    if (answers[cursor] == your_answer) {
      std::cout << "Yes!" << std::endl;
      player_points++;
    } else {
      std::cout << "Wrong answer." << std::endl;
      tv_viewer_points++;
    }
    
    std::cout <<"The right answer is: " << answers[cursor] << std::endl;
    std::cout << "Player score : " << player_points << std::endl;
    std::cout << "tv_viewer score : " << tv_viewer_points << std::endl;

    if(player_points >= 6) {
        std::cout << "Player win!";
        return 0;
    }
    if(tv_viewer_points >= 6) {
        std::cout << "Tv_viewers win!";
        return 0;
    }
  }
}

