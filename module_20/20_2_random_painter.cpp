#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

int main() {
    std::cout << "20.1 Drawing random pictures\n";

    std::srand(std::time(nullptr));
    int width, height;

    std::cout << "Enter width and height of your picture: w h" << std::endl;
    std::cin >> width >> height;

    std::ofstream file("/home/kate/CLionProjects/20_2_bin_painter/pic.txt");
    if(file.is_open()){
        for(int i = 0; i < width; i++){
            for(int j = 0; j < height; j++){
                file << std::rand()%2;
            }
            file << std::endl;
        }
    } else {
        std::cout << "Error opening file" << std::endl;
    }
    file.close();
}

