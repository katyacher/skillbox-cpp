#include <iostream>

bool correct(std::string s);
int won(std::string s, char c);

int main(){
    std::cout<<"11.5 Tic-tac-toe. \n";

    std::cout << "Input a results of the game Tic-tac-toe: " << std::endl;
    std::string str_1;
    std::string str_2;
    std::string str_3;
    std::getline(std::cin, str_1);
    std::getline(std::cin, str_2);
    std::getline(std::cin, str_3);

    std::string s = str_1 + str_2 + str_3;

    if (!correct(s)){
        std::cout << "Incorrect" << std::endl;
        return 0;
    }
    if(won(s,'X') == won(s,'O')){
        std::cout << "Nobody" << std::endl;
    } else if(won(s, 'X')){
        std::cout << "Petya won." << std::endl;
    } else {
        std::cout << "Vasya won." << std::endl;
    }
}

int won(std::string s, char c){
    bool won = true;
    int won_count = 0;
    for(int i = 0;  i < s.length(); i += 3){ // по горизонтали
        won = true;
        for (int j = 0; j < 3; j++){
            if(s[i + j] != c) {
                won = false;
            }
        }
        if(won) won_count++;
    }

    for (int i = 0; i < 3; i ++){ // по вертикали
        won = true;
        for(int j = 0; j < s.length(); j += 3) {
            if (s[j + i] != c) {
                won = false;
            }
        }
        if(won) won_count++;
    }

    won = true;
    for(int i = 2; i < s.length() - 2; i += 2){
        if(s[i] != c){
            won = false;
        }
    }
    if(won) won_count++;

    won = true;
    for(int i = 0; i < s.length(); i += 4){
        if(s[i] != c){
            won = false;
        }
    }
    if(won) won_count++;

    return won_count++;
}

bool correct(std::string s){
    int count_X = 0;
    int count_O = 0;

    for(int i = 0; i < s.length(); i++){
        if (s[i] == 'X')
            count_X++;
        else if (s[i] == 'O')
            count_O++;
        else if (s[i] != '.')
            return false;
    }

    if(count_O > count_X || count_X - 1 != count_O){
        return false;
    }
    if((won(s, 'O') > 0) && (count_X > count_O)){
        return false;
    }
    if((won(s, 'X') > 0) && (count_O >= count_X)){
        return false;
    }
  
    return true;
}
