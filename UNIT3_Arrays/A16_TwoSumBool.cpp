#include<bits/stdc++.h>
using namespace std;

bool twoSumBool(vector<int> &arr, int target){
    map<int,int> mpp;
    int n = arr.size();
    for(int i =0; i<n;i++){

        int a = arr[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()){
            return true;
        }

        mpp[a]=i;

    }

    return false;
}
bool twoSumBoolOptimum(vector<int> &arr, int target){
    int left =0;
    int right = arr.size()-1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            return true;
        }
        else if(sum > target){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}

int main(){
    int n;
    cin >>n;

    vector<int> arr;
    for(int i =0; i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int target;
    cin >> target;

    cout<< twoSumBoolOptimum(arr, target);
}