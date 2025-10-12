#include<bits/stdc++.h>
using namespace std;

vector<int> sort0s1s2sBetter(vector<int> &arr, int n){

    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for(int i =0; i<n;i++){
        if(arr[i]==0) cnt0++;
        else if(arr[i]==1) cnt1++;
        else cnt2++;
    }

    for(int i = 0; i< cnt0;i++){
        arr[i]=0;
    }
    for(int i = cnt0;i<cnt0+ cnt1;i++){
        arr[i]=1;
    }
    for(int i =cnt0+ cnt1; i<n;i++){
        arr[i]=2;
    }

    return arr;

}

void swap(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}

vector<int> sort0s1s2sOptimalDutchNationalFlag(vector<int> &arr, int n){
    int low = 0; // initialise low with 0 cuz start of array
    int mid = 0; // initialise mid with 0, bcoz unsorted array
    int high = n-1;

    while(mid<=high){

        if(arr[mid]==0){ // 0 and 1 both get sorted
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){ // 1 is already in correct place, no swapping required
            mid++;
        }
        else{ // high parts get sorted now
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    return arr;


}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0 ;i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    vector<int> ans = sort0s1s2sOptimalDutchNationalFlag(arr, n);

    for(int i = 0 ;i < n ;i++){
        cout << arr[i]<< " ";

    }
}