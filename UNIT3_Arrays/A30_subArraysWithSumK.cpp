#include<bits/stdc++.h>
using namespace std;

int countSubArraysBrute(vector<int> &arr, int n, int k){

    int count = 0;

    for(int i =0; i< n; i++){
        int sum = 0;
        for(int j =i ; j<n ; j++){

            sum +=arr[j];

            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int countSubArraysOptimal(vector<int> &arr, int n. int k){
    // USING PREFIX SUM,  MAP<PREFIX,COUNT>
    int n  =arr.size();

    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int preSum = 0 , cnt = 0;

    for(int i = 0 ;i<n ;i++){
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];

        mpp[preSum]++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i< n ; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int k;
    cin >> k;

    int ans = countSubArraysBrute(arr, n, k);
    cout << ans;
}