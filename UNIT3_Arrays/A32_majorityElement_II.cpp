#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    vector<int> ans;

    map<int,int> mpp;
    int n = nums.size();
    int minimumOccur = (n/3)+1;


    for(int i =0; i<n ;i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]] == minimumOccur){
            ans.push_back(nums[i]);
        }
        if(ans.size()==2) break;
    }

    sort(ans.begin(), ans.end());

    return ans;
    
}

vector<int> majorityElementII(vector<int> &arr)
{

   int n = arr.size();
   int minimumOccur = (int)(n/3)+1;

   int cnt1=0, cnt2 = 0;
   int el1 = INT_MIN;
   int el2 =INT_MIN;

   for(int i =0; i<n; i++){
       if(cnt1==0 && el2 != arr[i]){
           cnt1 = 1;
           el1 = arr[i];
       }
       else if( cnt2 == 0  && el1 != arr[i]){
           cnt2 =1;
           el2 =arr[i];
       }
       else if(el1 == arr[i]) cnt1++;
       else if(el2 == arr[i]) cnt2++;
       else {
           cnt1--;
           cnt2--;
       }
   }

   cnt1 =0, cnt2 = 0;

   for(int i =0 ; i<n ;i++){
       if(el1 == arr[i]) cnt1++;
       if(el2 == arr[i]) cnt2++;
   }

   vector<int> ans;
   if(cnt1 >=minimumOccur) ans.push_back(el1);
   if(cnt2 >=minimumOccur) ans.push_back(el2);

   sort(ans.begin(), ans.end());

   return ans;

}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0; i<n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }

    vector<int> ans;
    ans = majorityElement(arr);

    int m  =ans.size();
    for(int i = 0 ; i< m ; i++){
        cout << ans[i] << " ";
    }
}