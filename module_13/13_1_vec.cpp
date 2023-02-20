#include <iostream>
#include <vector>
int main() {
    std::cout << "Задача 1" << std::endl;

    int size,n;
    std::vector<int> vec;
    std::cout << "Input a count of elements you want to add. ";
    std::cout << "Than input the elements and a number you want to remove from elements." << std::endl;
    std::cin >> size;

    for(int i = 0; i < size; i++){
        std::cin >> n;
        vec.push_back(n);
    }

    int elem;
    std::cin >> elem;

    std::vector<int> newVector;
    for(int i = 0; i < vec.size(); i++){
        if(elem != vec[i]){
            newVector.push_back(vec[i]);
        }
    }

    for(int i = 0; i < newVector.size(); i++){
        std::cout << newVector[i] << " ";
    }

    return 0;
}

