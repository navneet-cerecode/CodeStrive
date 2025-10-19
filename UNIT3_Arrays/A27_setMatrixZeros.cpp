#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix){

    int n = matrix.size(); //get rows size(n)
    if(n==0) return;

    int m = matrix[0].size(); //get column size (m)
    int col0 =1;

    for(int i =0; i<n ;i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j] == 0){
                //mark ith row
                matrix[i][0] = 0;
                
                //mark jth col

                if(j!=0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }

    for(int i = 1; i <n; i++){
        for(int j =1 ; j<m ; j++){
            if(matrix[i][j] != 0){
                // check for row and col

                if(matrix[0][j] == 0 || matrix[i][0]== 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int j = 0; j<m ; j++) matrix[0][j] = 0;
    }

    if(col0 == 0){
        for(int i =0; i<n ;i++) matrix[i][0]= 0;
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

    setZeroes(matrix);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}