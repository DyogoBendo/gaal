#include <bits/stdc++.h>

using namespace std;

int main(){
    int n1, m1;
    cout << "Insira as dimensoes da matriz: ";
    cin >> n1 >> m1;
    vector<vector<int>> matrix1;
    vector<vector<int>> matrix_result;
    cout << "Insira os elementos da matriz: " << endl;
    for (int i = 0; i < n1; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < m1; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        matrix1.push_back(tmp);
    }

    for (int i = 0; i < m1; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < n1; j++)
        {
            tmp.push_back(matrix1[j][i]);
        }

        matrix_result.push_back(tmp);
        
    }
    
    cout << endl << "Resultado: " << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << matrix_result[i][j] << " ";
        }
        cout << endl;
        
    }
    
}