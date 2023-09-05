#include <bits/stdc++.h>

using namespace std;

int main(){    
    cout << "Digite os elemento da matriz: " << endl;
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    
    int r = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "elementos sendo somados: " << matrix[0][i] * matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] << endl;
        r += matrix[0][i] * matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "elementos sendo subtraidos: " << matrix[0][(4 - i) % 3] * matrix[1][(3 - i) % 3] * matrix[2][(2 - i) % 3] << endl;
        r -= matrix[0][(4 - i) % 3] * matrix[1][(3 - i) % 3] * matrix[2][(2 - i) % 3];
    }
    

    cout << "resultado: " << r << endl;
}