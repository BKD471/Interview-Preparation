#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n=nums.size();
        int mn=INT_MAX,mx=INT_MIN;
       
        bool flag=false;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                flag=true;
            }
            
            if(flag) mx=max(mx,nums[i]);
        }
        
       
        flag=false;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                flag=true;
            }
            
            if(flag) mn=min(mn,nums[i]);
        }
        
       
        
       int l,h;
        
        for( l=0;l<n;l++){
            if(nums[l]>mn) break;
        }
        
        for( h=n-1;h>=0;h--){
            if(nums[h]<mx) break;
        }
        
        return h-l<0?0:h-l+1;
        
    }
};