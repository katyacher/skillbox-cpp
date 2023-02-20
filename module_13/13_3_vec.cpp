#include <iostream>
#include <vector>

int main() {
    std::cout << "Задача 3" << std::endl;

    int elem;
    std::vector<float> vec;

    std::cout << "Input the elements: " << std::endl;
    std::cin >> elem;

    while(elem != -1){
        vec.push_back(elem);
        if(vec.size() > 20){
            vec.erase(vec.begin());
        }
        std::cin >> elem;
    }

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }

    return 0;
}

