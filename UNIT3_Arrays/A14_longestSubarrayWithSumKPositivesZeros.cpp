#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, int k){
    int maxiLen = 0;
    int n = arr.size();

    int i = 0;
    int j = 0;
    long long sum = 0;

    for(int j = 0; j<n;j++){

        sum += arr[j]; //expanding array

        while(sum > k){
            sum -=arr[i];
            i++;
        }

        if(sum==k){
            maxiLen = max(maxiLen,j-i+1);
        }
    }
    return maxiLen;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0; i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    int k;
    cin >> k; 

    int ans = longestSubarray(arr, k);
    cout << ans;
}