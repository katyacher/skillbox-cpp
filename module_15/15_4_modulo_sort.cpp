#include <iostream>
#include <vector>

void buble_sort(std::vector<int>&vec){
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0;j < vec.size() - 1; j++){
            if(vec[j] > vec[j+1]){
                int tmp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = tmp;
            }
        }
    }
}

void print_vec(std::vector<int>&vec){
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "15.3 Fifth ascending number." << std::endl;

    std::vector<int> vec;
    int x = 0;
    std::cout << "Please, enter the number: ";
    while(true){
        std::cin >> x;
        vec.push_back(x);
        if(vec.size() > 5){
            if(x == -2) return 0;
            if(x == -1){
                vec.pop_back();
                print_vec(vec);
                buble_sort(vec);
                print_vec(vec);
                std::cout << "Result: " << vec[4] << std::endl;
            }
        }
    }
}

