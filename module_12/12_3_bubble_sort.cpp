#include <iostream>

int main() {
    std::cout << "12.3 Bubble sort" << std::endl;
    int size = 15;
    float arr[size];
    bool flag;

    std::cout << "Input a numbers:" << std::endl;
    for(int i = 0; i < size; i++){
        std::cin >> arr[i];
    }

    for (int j = 0; j < (size - 1); j++){
      flag = false;
        for(int i = 0; i < (size - j - 1); i++){
            if (arr[i] > arr[i+1]){
              std::swap(arr[i], arr[i+1]);
              flag = true;
            }    
        }
      if(!flag){
        break;
      }
    }

    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

