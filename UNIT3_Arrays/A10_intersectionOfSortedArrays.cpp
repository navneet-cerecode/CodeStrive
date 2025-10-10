#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionOfArrays(vector<int> &arr1, vector<int> &arr2, int n, int m){

    int i=0;
    int j=0;

    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr2[j]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr1;
    for(int i =0;i<n;i++){
        int input;
        cin >> input;
        arr1.push_back(input);
    }

    int m;
    cin>>m;
    vector<int> arr2;
    for(int i=0; i<m;i++){
        int input;
        cin >> input;
        arr2.push_back(input);
    }

    vector<int> ans = intersectionOfArrays(arr1, arr2, n, m);

    for(int i =0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}