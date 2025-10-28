#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int target){
    int n = arr.size();

    int low= 0;
    int high = n-1;

    int ans = n;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] > target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;

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

    int target;
    cin >> target;

    int ans = upperBound(arr, target);
    cout << ans;
}