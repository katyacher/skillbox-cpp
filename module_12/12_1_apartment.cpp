#include <iostream>
#include <string>

int main() {
    std::cout << "Task 1. Apartment building." << std::endl;
    int n;
    std::string surnames[10];

    std::cout << "Enter the surnames of apartment owners:" << std::endl;
    for(int i = 0; i < 10; i++){
        std::getline(std::cin, surnames[i]);
    }

    std::cout << "Enter three numbers of apartment:\n";
    for(int i = 0; i < 3; i++){
        std::cin >> n;
        if(n < 1 || n > 10){
            std::cout << "There is no apartment with this number." << std::endl;
            continue;
        }
        std::cout << surnames[n - 1] << std::endl;
    }
    return 0;
}

