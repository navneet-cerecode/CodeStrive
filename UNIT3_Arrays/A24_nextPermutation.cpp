#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a =b;
    b=temp;
}

vector<int> nextPermutationOptimal(vector<int> &arr, int n){
    //getting the prefix match
    //find number greater than prefix match, but overall smaller number
    //place the rest in sorted order

    //step 1
    int index = -1;

    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }

    if(index ==-1){
        reverse(arr.begin(),arr.end());
        return arr;

    } 

    //step 2

    for(int i =n-1;i>=index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }

    //step 3

    reverse(arr.begin()+index+1,arr.end());

    return arr;
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

    vector<int> ans = nextPermutationOptimal(arr, n);

    for(int i = 0 ;i < n ;i++){
        cout << arr[i]<< " ";

    }
}