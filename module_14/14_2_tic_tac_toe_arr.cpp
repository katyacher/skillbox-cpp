#include <iostream>
#include <string>

void print_board(char (& arr)[3][3]){
    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3;j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
}

bool correct(int x, int y){
    if (x < 0 || x > 2 || y < 0 || y > 2 ){
        return 0;
    } else {
        return 1;
    }
}

bool win(char (& arr)[3][3], char smbl) {
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == smbl)
                c0++;
            if (arr[j][i] == smbl)
                c1++;
            if (arr[j][j] == smbl)
                c2++;
            if (arr[2 - j][j] == smbl)
                c3++;
        }
        if (c0 == 3 || c1 == 3 || c2 == 3 || c3 == 3) {
            return 1;      
        } else {
            c0 = 0;
            c1 = 0;
            c2 = 0;
            c3 = 0;
        }  
    }
  return 0;
}


int main() {
    std::cout << "14.2 Игра крестики - нолики." << std::endl;
    char board[3][3] = {{'-','-','-'},
                        {'-','-','-'},
                        {'-','-','-'}};
    int turn = 1;
  
    std::cout << "Чтобы сделать ход, введите координаты x и y";
    std::cout << " числами от 0 до 2 через пробелл." << std::endl;
    std::cout << "Например: 1 1, 0 1 и т.д." << std::endl;
    print_board(board);
    
    while(turn < 10){
        if(turn % 2 != 0){
            std::cout << "Ход первого игрока: ";
            int x = 0, y = 0;
            std::cin >> x >> y;
            while(true){
                if (!correct(x,y)){
                      std::cout << "Введите координаты x и y от 0 до 2: ";
                }else if (board[x][y]!= '-'){
                    std::cout << "Выберете свободную ячейку"<< std::endl;
                } else{
                    break;
                } 
                std::cin >> x >> y;
            }
          
            board[x][y] = 'X';
            turn++;
        } else {
            std::cout << "Ход второго игрока: ";
            int x = 0, y = 0;
            std::cin >> x >> y;
            while(true){
                if (!correct(x,y)){
                      std::cout << "Введите координаты x и y от 0 до 2: ";
                }else if (board[x][y]!= '-'){
                    std::cout << "Выберете свободную ячейку"<< std::endl;
                } else{
                    break;
                } 
                std::cin >> x >> y;
            }
          
            board[x][y] = 'O';
            turn++;
        }

        print_board(board); 

        if(turn >= 5){
            if(win(board, 'X')|| win(board, 'O')){
                break;
            } 
        }

    }
  
    if(win(board, 'X')){
        std::cout << "Выиграл первый игрок" << std::endl;
    } else if( win(board, 'O')){
        std::cout << "Выиграл второй игрок" << std::endl;
    } else {
        std::cout << "Ничья" << std::endl;
    }
    return 0;
}

