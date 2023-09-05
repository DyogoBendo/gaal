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

    char c;
    cout << "Usara uma linha (l) ou coluna(c)? ";
    cin >> c;

    int number;
    cout << "Qual numero dela? ";
    cin >> number;
    number --;

    if(c == 'c'){
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> current_matrix ;
            int factor;
            if(i + number % 2){
                factor = -1;
            } else{
                factor = 1;
            }

            factor *= matrix[i][number];

            for (int j = 0; j < n; j++)
            {
                vector<int> tmp;
                if(j == i) continue;
                for (int k = 0; k < n; k++)
                {
                    if(k == number) continue;
                    tmp.push_back(matrix[j][k]);
                }
                current_matrix.push_back(tmp);
            }
            cout << "---------" << endl;
            cout << "Fator: " << factor << endl;
            for (int j = 0; j < n - 1; j++)
            {
                for (int k = 0; k < n - 1; k++)
                {
                    cout << current_matrix[j][k] << " ";
                }
                cout << endl;
            }
            
          
        }
        
    } else{
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> current_matrix ;
            int factor;
            if((i + number) % 2){
                factor = -1;
            } else{
                factor = 1;
            }

            factor *= matrix[number][i];

            for (int j = 0; j < n; j++)
            {
                vector<int> tmp;
                if(j == number) continue;
                for (int k = 0; k < n; k++)
                {
                    if(k == i) continue;
                    tmp.push_back(matrix[j][k]);
                }
                current_matrix.push_back(tmp);
            }
            cout << "---------" << endl;
            cout << "Fator: " << factor << endl;
            for (int j = 0; j < n - 1; j++)
            {
                for (int k = 0; k < n - 1; k++)
                {
                    cout << current_matrix[j][k] << " ";
                }
                cout << endl;
            }
            
          
        }
        
    }
    
}