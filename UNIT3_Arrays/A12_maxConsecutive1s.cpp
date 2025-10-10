#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi =0;
    int count = 0;

    for(int i = 0;i<nums.size();i++){
        if(nums[i]==1){
            count +=1;
            maxi = max(maxi,count);
        }
        else{
            count = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i =0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }

    int ans = findMaxConsecutiveOnes(arr);
    cout << ans;
}