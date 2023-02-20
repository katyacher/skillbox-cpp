#include <iostream>
using namespace std;

int main()
{
    cout<<"14.6 Умножение матрицы на вектор"<< std::endl;
    
    int size = 4;
    float A[size][size];
    float B[size];
    float C[] = {0,0,0,0};
    
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< "Enter " << "["<<i<<"]["<<j<<"]  element of matrix A: ";
            cin>> A[i][j];
        }
    }

    cout << "You entered matrix A: " << '\n';
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the vector B: \n";
    for (int i = 0; i < size; i++){
            cin >> B[i];
    }

    
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C[i] += A[i][j] * B[j];   
        }
    }
    
    cout << "Result is: " << '\n';
    for (int i = 0; i < size; i++){
            cout << C[i] << " ";
    }
    
    return 0;
}
