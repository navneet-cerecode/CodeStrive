#include<bits/stdc++.h>
using namespace std;

int appearsOnce(vector<int> &arr, int n){
    int ans= 0;
    for(int i=0;i< n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i =0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }

    int ans = appearsOnce(arr, n);
    cout << ans;
}