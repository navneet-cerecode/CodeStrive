#include<bits/stdc++.h>
using namespace std;

int maxSubarrayKadaneSum(vector<int> &arr, int n){

    int maxi = INT_MIN;
    int sum = 0;

    for(int i =0; i<n;i++){
        sum += arr[i];

       if(sum > maxi) maxi = sum;
       
       if(sum<0) sum = 0;
    }
    return maxi;
}

void maxSubarrayKadaneArray(vector<int> &arr, int n){

    int maxi = INT_MIN;
    int sum = 0;
    int ansStart;
    int ansEnd;

    for(int i =0; i<n;i++){

        int start;

        if(sum==0) {
            start = i;
        }
        sum += arr[i];

       if(sum > maxi) {
        maxi = sum;
        ansStart = start;
        ansEnd = i;
       }
       
       if(sum<0) sum = 0;
    }
    for(int i =ansStart; i<=ansEnd;i++){
        cout << arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> arr;
    for(int i =0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }

    maxSubarrayKadaneArray(arr, n);
}