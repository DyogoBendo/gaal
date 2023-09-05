#include <bits/stdc++.h>

using namespace std;

int main(){
    int n1, n2, m1, m2;
    cout << "Insira as dimensoes da primeira matriz: ";
    cin >> n1 >> m1;
    vector<vector<int>> matrix1;
    vector<vector<int>> matrix2;
    cout << "Insira os elementos da primeira matriz: " << endl;
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
    
    cout << "Insira as dimensoes da segunda matriz: ";
    cin >> n2 >> m2;
    cout << "Insira os elementos da segunda matriz: " << endl;
    for (int i = 0; i < n2; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < m2; j++)
        {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        matrix2.push_back(tmp);
    }

    if(n1 != n2 || m1 != m2){
        cout << "Matrizes possuem dimensoes diferentes, nao eh possivel realizar a soma!" << endl;
        return 0;
    }

    vector<vector<int>> matrix_result;

    for (int i = 0; i < n2; i++)
    {     
        vector<int> tmp;   
        for (int j = 0; j < m2; j++)
        {
            int x;
            x = matrix1[i][j] + matrix2[i][j];
            tmp.push_back(x);
        }
        matrix_result.push_back(tmp);
    }
    
    cout << endl << "Resultado: " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << matrix_result[i][j] << " ";
        }
        cout << endl;
        
    }
    
}