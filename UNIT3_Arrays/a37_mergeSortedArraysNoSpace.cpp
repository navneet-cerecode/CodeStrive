#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2, int n , int m){
    //2 POINTER APPROACH

    int left = n-1; // pointing biggest of arr1
    int right  = 0; //pointing smallest of arr2
    
    while(left >= 0 && right < m){
        //swapping the correct elements
        if(arr1[left] > arr2[right]){
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }

        // stop loop if elemnts in correct arrays

    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    return;
}

void swapIfGreater(vector<int> &arr1, vector<int> &arr2, int ind1 , int ind2){
    if(arr1[ind1] > arr2[ind2]){
        swap(arr1[ind1], arr2[ind2]);
    }
}

void mergeApp2(vector<int> &arr1, vector<int> &arr2, int n , int m){

    int len = n+m;
    int gap = (len/2) + (len%2); // to get the ceil value of the function

    while(gap>0){
        int left =0;
        int right = left+gap;

        while(right <len){
            //arr1 and arr2
            if(left <n && right>=n){
                swapIfGreater(arr1, arr2, left, right-n);
            }
            //arr2 and arr2
            else if(left>=n){
                swapIfGreater(arr2, arr2, left-n, right-n);
            }
            else{
                //arr1 and arr1
                swapIfGreater(arr1, arr1, left, right);
            }
            left++, right++;

        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
    return;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> arr1;
    for(int i =0; i< n ; i++){
        int input;
        cin >> input;
        arr1.push_back(input);
    }

    vector<int> arr2;
    for(int i =0 ; i< m ; i++){
        int input;
        cin>> input;
        arr2.push_back(input);
    }


    mergeApp2(arr1, arr2, n, m);

    for(int i = 0 ; i <n ; i++){
        cout << arr1[i] << " ";
    }

    cout<<endl;

    for(int i = 0 ; i<m ; i++){
        cout << arr2[i] << " ";
    }
}