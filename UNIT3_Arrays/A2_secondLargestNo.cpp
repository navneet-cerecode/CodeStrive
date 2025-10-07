#include<bits/stdc++.h>
using namespace std;

int secondLargestGood(int arr[],int n){
    int largest = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int slargest = -1;
    for(int i =0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest = arr[i];
        }
    }

    return slargest;
}

int secondLargestOptimal(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i = 0; i< n;i++){
        if(arr[i]> largest){
            slargest = largest;
            largest = arr[i];           
        }
        else if(arr[i] < largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallestOptimal(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i = 0; i< n;i++){
        if(arr[i]< smallest){
            ssmallest = smallest;
            smallest = arr[i];           
        }
        else if(arr[i] > smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}


int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    cout << secondLargestOptimal(arr, n);
   
}