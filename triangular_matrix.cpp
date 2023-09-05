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

    vector<vector<int>> resulting_matrix = matrix;

    // começamos da primeira linha, anulando a primeira coluna das outras matrizes
    int current_position = 0;    

    int mult = 1;

    while(current_position < n - 1){
        cout << "-----------------" << endl;
        cout << "etapa: " << current_position + 1 << endl;
        int element = resulting_matrix[current_position][current_position];
        cout << "Elemento atual: " << element << endl;
        for (int i = current_position + 1; i < n; i++)
        {
            mult *= element;
            int compare_element = resulting_matrix[i][current_position];
            cout << "valor de elemento de comparacao: " << compare_element << endl;
            for (int j = current_position; j < n; j++)
            {
                resulting_matrix[i][j] = (element * resulting_matrix[i][j]) - (compare_element * resulting_matrix[current_position][j]);   
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << resulting_matrix[i][j] << " ";                
            }
            cout << endl;
        }
        current_position ++;        
        
    }
    cout << "-----------------" << endl;
        

    int det = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {            
            if(i == j) det *= resulting_matrix[i][j];
        }        
    }

    cout << "Valor da diagonal encontrado: " << det << " dividir: " << mult << endl;
    cout << "Determinante: " << det / mult << endl;
}