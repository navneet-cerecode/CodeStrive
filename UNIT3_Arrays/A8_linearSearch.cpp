#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int key;
    cin >> key;

    for(int i =0; i<n ; i++){
        if(arr[i]==key){
            int ans = i;
        }
    }
}