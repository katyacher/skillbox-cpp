#include <iostream>

int main() {
    std::cout << "12.2 Number series" << std::endl;

    const int size = 15;
    int numbers[size] ;
    int x;
    int count;

    std::cout << "Input X - the start of a number series: ";
    std::cin >> x;

    for(int i = 0; i < size; i++){//initialization from X
        numbers[i] = x + i;
        if(i == size - 1){
            numbers[size - 1] = numbers[std::rand()%14];
        }
    }

    for(int i = 0; i < size; i++){//mixed
        int r1 = rand()%14;
        int r2 = rand()%14;
        while(r1 == r2){
            r2 = rand()%14;
        }
        std::swap(numbers[r1], numbers[r2]);
    }

    std::cout << "Number series: ";
    for(int i = 0; i < size; i++){
         std::cout<< numbers[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i < size; i++){//search
        count = 1;
        for(int j = i + 1; j < size; j++){
            if(numbers[i] == numbers[j]) count++;
            if (count == 2){
                std::cout << numbers[i] << std::endl;
            }
        }
    }

    return 0;
}

