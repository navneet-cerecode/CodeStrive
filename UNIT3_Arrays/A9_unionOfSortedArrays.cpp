#include<bits/stdc++.h>
using namespace std;

vector<int> unionArraysOptimal(vector<int> &arr1, vector<int> arr2, int n, int m){
    int i =0;
    int j =0;

    vector<int> unionArr;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;

    }

    while(j<m){
            if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
    }
    return unionArr;
}

int main(){
    int n1;
    cin >> n1;

    vector<int> arr1;
    for(int i = 0; i < n1;i++){
        int input;
        cin >> input;
        arr1.push_back(input);
    }

    int n2;
    cin >> n2;

    vector<int> arr2;
    for(int i = 0; i < n2;i++){
        int input;
        cin >> input;
        arr2.push_back(input);
    }

    vector<int> ans = unionArraysOptimal(arr1, arr2, n1, n2);

    for(int i = 0; i<ans.size();i++){
        cout<< ans[i] << " ";
    }

}