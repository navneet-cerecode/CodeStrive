#include<bits/stdc++.h>
using namespace std;

int majorityElementBetter(vector<int> &arr, int n)
{
    map <int,int> mpp;
    for(int i = 0;i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }

    return -1;
}

int mooreVotingMajority(vector<int> &arr, int n){

    int el;
    int cnt= 0;

    for(int i =0; i<n ; i++){

        if(cnt==0){
            cnt =1;
            el = arr[i];
        }
        else if(el=arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }

    }

    int counter = 0;
    for(int i =0; i<n; i++){
        if(arr[i]==el) counter ++;
    }
    if(counter > n/2) return el;
    else return -1;
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

    int ans = mooreVotingMajority(arr, n);
    cout << ans;
}