#include <iostream>
#include <cstdio>

int main() {
    std::cout << "16.1 Speedometer" << std::endl;
    char text[100];
    float delta_speed = .0;
    float speed = .0;
    do{
        std::cout << "Delta speed: ";
        std::cin >> delta_speed ;
        speed += delta_speed;
        if (speed > 150 - 0.01){
            speed = 150.0;
        }
        std::sprintf(text, "Speed: %.1f km/h" ,  speed);
        std::cout << text << std::endl;
    } while(speed > 0 + 0.01) ;

    return 0;
}

