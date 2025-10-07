// SELECTION SORT

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n){
    for(int i = 0 ; i < n-1; i++){
        int mini = i;
        for(int j = i+1 ; j < n; j++){
            if(arr[j] < arr [mini]) mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}

void bubbleSort(int arr[], int n){
    for(int i = n-1; i>=1 ; i--){
        int didSwap = 0;
        for(int j = 0; j <= i -1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap==0) break;
    }
}

void insertionSort(int arr[], int n){
    for(int i =0; i <= n-1; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for(int i =0 ; i < n;i++){
        cout << arr[i] << endl;
    }
   return 0;
}