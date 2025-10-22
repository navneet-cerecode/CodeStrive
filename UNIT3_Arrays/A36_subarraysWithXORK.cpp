#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
   // brute
//    int n  = arr.size();
//    int cnt = 0;

//    for(int i  = 0; i<n ; i++){           
//        int curr_xor = 0;
//        for(int j = i; j<n; j++){

//            curr_xor = curr_xor^arr[j];

//            if(curr_xor == x) cnt++;
//        }
//    }
//    return cnt;

   map<int,int> xorMpp;
   int n = arr.size();
   int XR = 0;
   int cnt = 0;
   xorMpp[0]++;

   for(int i = 0 ; i< n ; i++){
       XR = XR^arr[i];
       int needed = XR^x;

       if(xorMpp.find(needed) != xorMpp.end()) cnt += xorMpp[needed];

       xorMpp[XR]++;

   }
   return cnt;


}