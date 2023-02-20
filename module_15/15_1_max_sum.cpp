#include <iostream>
#include <vector>

int main() {
    std::cout << "15.1 Largest sum of consecutive elements" << std::endl;

    std::vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int sum = 0, max_sum = 0, a = 0, b = 0;

    for(int i = 0; i < vec.size(); i++){
        sum = 0;
        for(int j = i; j < vec.size(); j++){
            sum+= vec[j];
            if(sum > max_sum){
                max_sum = sum;
                a = i;
                b = j;
            }
        }
    }
    std::cout << "a = ";
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "sum = " << max_sum << std::endl;
    std::cout << "i = " << a << ", j = " << b << std::endl;
    return 0;
}

