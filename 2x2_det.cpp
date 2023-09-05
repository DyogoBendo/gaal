#include <bits/stdc++.h>

using namespace std;

int main(){    
    cout << "Digite os elemento da matriz: " << endl;
    int matrix[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    
    int r = 0;

    for (int i = 0; i < 2; i++)
    {
        int x = matrix[i][0] * matrix[(i + 1) % 2][1];        
        if(!i){
            r += x;
        } else{
            r -= x;
        }
    }

    cout << "resultado: " << r << endl;
}