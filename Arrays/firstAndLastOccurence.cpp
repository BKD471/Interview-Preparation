#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int sendFirst(vector<int>& nums,int target){
        
        int n=nums.size();
        
        int l=0,h=n-1;
         while(l<=h){
            
            int mid=l+(h-l)/2;
            
            if(nums[mid]==target && (mid==0 || nums[mid]!=nums[mid-1]) )  return mid;
           
             if(nums[mid]>=target) h=mid-1; 
             else l=mid+1;
        }
        return -1;
    }
    
     int sendLast(vector<int>& nums,int target){
        
       int n=nums.size();
        
        int l=0,h=n-1;
         while(l<=h){
            
            int mid=l+(h-l)/2;
            
            if(nums[mid]==target && (mid==n-1 || nums[mid]!=nums[mid+1]) )  return mid;
           
             if(nums[mid]<=target) l=mid+1; 
             else h=mid-1;
        }
         return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        int n=nums.size();
    
        vector<int> res;
        
        
        int first=sendFirst(nums,target);
        int last=sendLast(nums,target);
        
        res.push_back(first);
        res.push_back(last);
        
        return res;
        
    }
};