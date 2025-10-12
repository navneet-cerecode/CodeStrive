#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumIndex(vector<int> &arr, int target){
    map <int,int> mpp;

    int n = arr.size();

    for(int i =0; i<n;i++){
        int a = arr[i];
        int more = target - a;
        
        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }
        mpp[a]=i;
    }
    return{ -1,-1};
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

    int target;
    cin >> target;

    vector<int> ans = twoSumIndex(arr, target);

    for(int i = 0 ;i < 2 ;i++){
        cout << arr[i]<< " ";

    }
}