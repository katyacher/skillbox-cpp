#include <iostream>
using namespace std;

int main()
{
    cout<<"14.4 Equality of matrices" << endl;
    
    int size = 4;
    int A[size][size];
    int B[size][size];
    
    cout << "Complete the first matrix." << endl;
    
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< "Enter " << "["<<i<<"]["<<j<<"]  element of matrix A: ";
            cin>> A[i][j];
        }
    }
    
    cout << "Complete the second matrix." << endl;
    
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< "Enter " << "["<<i<<"]["<<j<<"]  element of matrix B: ";
            cin>> B[i][j];
        }
    }
    
    cout << "You entered matrix A: " << endl;
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< A[i][j] << " ";
            
        }
        cout << endl;
    }

    cout << "You entered matrix B: " << endl;
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< B[i][j] << " ";
            
        }
        cout << endl;
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (A[i][j]!= B[i][j]){
            cout << "Not equal";
            return 0;
            }
        }
    }
    cout << "Equal";
    return 0;
}
