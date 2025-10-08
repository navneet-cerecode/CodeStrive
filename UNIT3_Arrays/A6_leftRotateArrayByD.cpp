#include<bits/stdc++.h>
using namespace std;

void rotateArrayByD(vector<int> &arr, int n, int d){
    //storing in temp
    d= d%n;

    vector<int> temp;
    for(int i =0; i<d;i++){
        temp.push_back(arr[i]);
    }

    //shifting by D places
    for(int i = d;i < n; i++){
        arr[i-d]=arr[i];
    }

    //putting the first d elements from temp to array
    for(int i=n-d; i <n;i++){
        arr[i]= temp[i-(n-d)];
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0 ;i<n; i++){
        int number;
        cin >> number;
        arr.push_back(number);
    }

    int d;
    cin>>d;
    rotateArrayByD(arr, n, d);

    for(int i =0; i<n; i++){
        cout << arr[i] << endl;
    }
}