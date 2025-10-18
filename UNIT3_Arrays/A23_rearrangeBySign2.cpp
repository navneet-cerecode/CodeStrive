#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a =b;
    b=temp;
}

vector<int> rearrange(vector<int> &arr, int n){
    vector<int> pos;
    vector<int> neg;

    //Separating positive and negative ints

    for(int i =0; i<n;i++){
        if(arr[i] > 0) pos.push_back(arr[i]);
        else if(arr[i] < 0) neg.push_back(arr[i]);
    }

    if(pos.size()>neg.size()){
        for(int i =0; i< neg.size();i++){
            arr[i*2] = pos[i];
            arr[i*2+1] = neg[i];
        }
        int index = neg.size()*2; // itne bhar gaye

        //fill the rest

        for(int i =neg.size();i<pos.size();i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{

        for(int i =0; i< pos.size();i++){
            arr[i*2] = pos[i];
            arr[i*2+1] = neg[i];
        }
        int index = pos.size()*2;

        for(int i =pos.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
        }

    }
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

    vector<int> ans = rearrange(arr, n);

    for(int i = 0 ;i < n ;i++){
        cout << arr[i]<< " ";

    }
}