#include<bits/stdc++.h>
using namespace std;

vector<int> leadersBrute(vector<int> &arr, int n){

    vector<int> ans;
    for(int i =0; i<n;i++){

        bool is_leader= true;//flag for leader

        // start from i+1

        for(int j =i +1; j<n;j++){ 
            if(arr[j] >= arr[i]){ 
                is_leader= false;
                break;
            }
        }

        if(is_leader) {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

vector<int> leadersOptimal(vector<int> &arr, int n){
    vector<int> ans;

    if(n==0) return ans; //handling edge cases


    int maxi = arr[n-1];

    //pushrightmost element in arr

    ans.push_back(maxi);

    for(int i =n-2; i>=0 ;i--){
        if(arr[i]> maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    // reverse the array (optional)

    return ans;
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
    vector<int> ansArr = leadersOptimal(arr, n);

    for(int i =0; i< ansArr.size();i++){
        cout << ansArr[i] << " ";
    }
}