#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i =1; i<n; i++){
        arr[i-1]= arr[i];
    }
    arr[n-1]= temp;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0;i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    rotateArray(arr, n);
    for(int i =0; i<n;i++){
        cout << arr[i] << endl;
    }
}