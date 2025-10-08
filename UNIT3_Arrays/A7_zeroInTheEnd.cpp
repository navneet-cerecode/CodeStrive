#include<bits/stdc++.h>
using namespace std;

void moveZeroesBrute(vector<int> &arr, int n){
    //Copying all non zero entries in temp
    vector<int> temp;
    for(int i =0; i <n;i++){
        if(arr[i] !=0){
            temp.push_back(arr[i]);
        }
    }

    //copying the entries at the front
    int nonZeroSize = temp.size();
    for(int i = 0; i < nonZeroSize;i++){
        arr[i]=temp[i];
    }

    //updating everything else to 0
    for(int i = nonZeroSize;i<n;i++){
        arr[i]=0;
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b= temp;
}

void moveZeroesOptimal(vector<int> &arr, int n){
    int j =0;
    for(int i = 0; i<n ; i++){
        if(arr[i] !=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int n ;
    cin >> n;

    vector<int> arr;
    for(int i =0 ; i<n;i++){
        int number;
        cin >> number;
        arr.push_back(number);
    }

    moveZeroesOptimal(arr, n);
    for(int i =0; i<n;i++){
        cout << arr[i] << " ";
    }
}