#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        
        int l=0,h=n-2;
        
        while(l<=h){
            int mid=l+(h-l)/2;
            
            if(mid%2){
                if(nums[mid-1]==nums[mid]) l=mid+1;
                else h=mid-1;
            }else{
                
                if(nums[mid]==nums[mid+1]) l=mid+1;
                else h=mid-1;
            }
            
        }
        
        return nums[l];
    }
};