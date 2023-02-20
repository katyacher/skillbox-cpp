#include <iostream>
#include <vector>

int main() {
    std::cout << "15.2 Find 2 numbers in array with a given sum." << std::endl;

    std::vector<int> vec = {2, 7, 11, 15};
    int sum = 9;

    for(int i = 0; i < vec.size(); i++){
        for(int j = i; j < vec.size(); j++){
            if(vec[i] + vec[j] == sum){
                std::cout << vec[i] << " " << vec[j] << std::endl;
                return 0;
            }
        }
    }
    return 0;
}

