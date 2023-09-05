#include <bits/stdc++.h>

using namespace std;

int main(){    
    int n; 
    cout << "Digite a ordem da matriz: " << endl;
    cin >> n;

    cout << "Digite os elemento da matriz: " << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
        
    }

    // precisamos encontrar o primeiro 1;

    int line = -1, column = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 1){
                line = i;
                column = j;
            }
            break;
        }        

        if(line != -1) break;
        
    }
    
    if(line == -1){
        cout << "Nenhum 1 encontrado, não iremos prosseguir com a regra de chio. ";
        return 0;
    }

    int mult = 1;

    if(line != 0){
        mult *= -1;
    }
    if(column != 0){
        mult *= -1;
    }

    vector<vector<int>> resulting_matrix(n - 1, vector<int>(n - 1));
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            resulting_matrix[i - 1][j - 1] = matrix[i][j] - ( matrix[i][0] * matrix[0][j]);
        }
        
    }

    cout << "resultado: " << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << mult * resulting_matrix[i][j] << " ";
        }
        cout << endl;
    }
}