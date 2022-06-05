#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
        
//         int n=nums.size();
//         vector<int> res(n);
//         vector<int> L(n);
//         vector<int> R(n);
//         L[0]=1;
//         R[n-1]=1;
        
//         for(int i=1;i<n;i++){
//             L[i]=L[i-1]*nums[i-1];
//         }
        
//         for(int i=n-2;i>=0;i--){
//             R[i]=R[i+1]*nums[i+1];
//         }
        
//         for(int i=0;i<n;i++){
//             res[i]=L[i]*R[i];
//         }
        
//         return res;
//     }
// };


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        
       int lp=1;
        for(int i=0;i<n;i++){
            res[i]=lp;
            lp*=nums[i];
        }
        
        
        int rp=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=rp;
            rp*=nums[i];
        }
        
      
        
        return res;
    }
};