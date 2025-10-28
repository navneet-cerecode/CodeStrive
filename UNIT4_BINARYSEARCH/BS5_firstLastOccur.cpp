#include<bits/stdc++.h>
using namespace std;

//BINARY SEARCH

int firstOccur(const vector<int> nums, int target){
    int n  = nums.size();
    int low= 0;
    int high = n-1;

    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]== target){
            ans = mid;
            high = mid-1;
        }
        else if(nums[mid] > target){
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return ans;
}

    int lastOccur(const vector<int> nums, int target){
    int n  = nums.size();
    int low= 0;
    int high = n-1;

    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]== target){
            ans = mid;
            low = mid+1;
        }
        else if(nums[mid] > target){
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return ans;
}

//LOWER UPPER BOUND

#include<bits/stdc++.h>

int lowerBound(vector<int> &arr, int target){
    int n = arr.size();

    int low= 0;
    int high = n-1;

    int ans = n;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;

}
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

vector<int> searchRange(vector<int> &arr, int x)
{
	int lb = lowerBound(arr, x);
	if(lb == arr.size()|| arr[lb] != x) return {-1,-1};

	return {lb, upperBound(arr, x)-1};
}

