#include <iostream>
#include <vector>
int main() {
    std::cout << "Задача 2" << std::endl;

    float total_price = 0;
    std::vector<float> prices =  {2.5, 4.25, 3.0, 10.0};
    std::vector<float> purchases = {1, 1, 0, 3};

    for(int i = 0; i < purchases.size(); i++){
        if(purchases[i] >= prices.size())
            std::cout << "Price with index "<< purchases[i] << " does not exist." << std::endl;
        else
            total_price += prices[purchases[i]];
    }

    std::cout << total_price << std::endl;

    return 0;
}

