#include<bits/stdc++.h>
using namespace std;

int longestConscSeq(vector<int> &arr, int n){

    if(n==0) return 0;

    int cntCurr= 1;
    int largest =1;

    sort(arr.begin(),arr.end());
    int lastSmaller = arr[0];

    for(int i =1; i<n ; i++){
        if(arr[i] == lastSmaller +1){
            cntCurr++;
            lastSmaller =arr[i];
        }
        else if(arr[i] != lastSmaller){
            cntCurr = 1;
            lastSmaller = arr[i];
        }

        largest = max(cntCurr, largest);
    }

    return largest;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0; i<n ;i++){
        int input;
        cin >> input;

        arr.push_back(input);
    }

    int ans = longestConscSeq(arr, n);
    cout << ans;
}