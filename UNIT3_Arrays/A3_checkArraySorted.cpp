#include<bits/stdc++.h>
using namespace std;

bool sortedArrayMine(vector<int> &arr,int n){
    int sorted = 1;
    for(int i =0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            sorted = 0;
            break;
        }
    }
    return sorted;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    cout << sortedArrayMine(arr, n);
   
}