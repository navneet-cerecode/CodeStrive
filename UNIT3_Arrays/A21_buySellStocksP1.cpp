#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int n){
    int mini = prices[0];
    int maxProfit = 0;

    for(int i =0; i<n;i++){
        int profit =prices[i] - mini;

        maxProfit= max(profit, maxProfit);

        mini = min(mini, prices[i]);
    }
    return maxProfit;
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

    int ans = maxProfit(arr, n);

    cout << ans;
}