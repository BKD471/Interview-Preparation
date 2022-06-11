#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum<x) return -1;  
        int target=sum-x;
        
        int left=0,high=0;
        int prefixSum=0;
        int len=INT_MIN;
        

        //This sliding window approach wont work for negative numbers;
        for(int i=0;i<n;i++){
            
            prefixSum+=nums[i];
            while(prefixSum>target){
                prefixSum-=nums[left];
                left++;
            }
            if(prefixSum==target){
                len=max(len,high-left+1);
            }
            
            high++;
        }
        
        
        
        return len==INT_MIN? -1: n-len;
    }
};