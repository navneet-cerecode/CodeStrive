#include <bits/stdc++.h>
using namespace std;

void removeDuplicatesBrute(vector<int> &arr, int n){
    set<int> st;

    // nlogn
    for(int i =0;i<n;i++){
        st.insert(arr[i]);
    }

    //n
    int index = 0;

    for(auto it : st){
        arr[index] = it;
        index++;
    }
}

void removeDuplicatesOptimal(vector<int> &arr, int n){
    if (n == 0) return;
    // ind = i, i++
    // ind != i, arr[ind]= arr[i], ind++,i++
    int ind = 1;
    for(int i =1; i < n ;i++){

        if(arr[ind-1] != arr[i]){
            arr[ind]= arr[i];
            ind++;
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0; i<n;i++){
        int number;
        cin >> number;
        arr.push_back(number);
    }

    removeDuplicatesOptimal(arr, n);

    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }
}