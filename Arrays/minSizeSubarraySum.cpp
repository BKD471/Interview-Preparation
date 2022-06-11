#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        
         int n=nums.size();
        int prefixSum=0;
        int l=0;
        int len=INT_MAX;
        
        
        for(int i=0;i<n;i++){
            
            prefixSum+=nums[i];
            while(prefixSum>=target){
                 len=min(len,i-l+1);
                prefixSum-=nums[l];
                l++;
               
            }
            
        }
        return len==INT_MAX? 0: len;
    }
};