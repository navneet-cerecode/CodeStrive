#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a =b;
    b=temp;
}

vector<int> rearrangeMine(vector<int> &arr, int n){

    int pos = 0; // positive on even places
    int neg = 1; //negatove on odd places

    vector<int> ans(n);

    for(int i =0; i<n;i++){
        if(arr[i] <0){
            ans[neg]= arr[i];
            neg +=2;
        }
        else if(arr[i] >0){
            ans[pos] = arr[i];
            pos += 2;
        }
    }
    return ans;

}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0 ;i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    vector<int> ans = rearrangeMine(arr, n);

    for(int i = 0 ;i < n ;i++){
        cout << arr[i]<< " ";

    }
}