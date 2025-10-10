#include<bits/stdc++.h>
using namespace std;

int missingNumBrute(vector<int> &nums, int n){
    vector<int> hash(n+1);

    //make a hash map
    for(int i =0;i<n-1;i++){
        hash[nums[i]] +=1;
    }

    int ans;

    //return the index with hash =0

    for(int i=0; i <n;i++){
        if(hash[i]==0){
            ans = i;
        }
    }
    return ans;
}

int missingNumOptimal(vector<int> &nums, int n){
    int actual_size = n-1;
    int sum = (actual_size*(actual_size+1))/2;
    int actual = 0;
    for(int i=0;i<n-1;i++){
        actual += nums[i];
    }

    int ans = sum - actual;
    
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums;

    for(int i =0;i<n-1;i++){
        int input;
        cin>>input;
        nums.push_back(input);
    }

    int ans = missingNumOptimal(nums, n);
    cout<< ans;
}