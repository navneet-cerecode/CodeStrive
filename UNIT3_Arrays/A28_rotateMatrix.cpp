#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix){

    int n  = matrix.size();

    for(int i =0 ; i<n-1 ; i++){
        for(int j  = i +1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0 ;i <n ; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return;
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}