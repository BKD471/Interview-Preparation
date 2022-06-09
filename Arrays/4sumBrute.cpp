#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool bin_search(vector<int>& nums,int l,int h,int target){
        
        while(l<=h){
            
            int mid=l+(h-l)/2;
            if(nums[mid]==target) return true;
            
            if(nums[mid]>target) h=mid-1;
            else l=mid+1;
        }
        return false;
        
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        set<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    
                    int rem=(long long)target-((long long)nums[i]+(long long)nums[j]+(long long)nums[k]);
                    if(bin_search(nums,k+1,n-1,rem)){
                        
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(rem);
                        sort(temp.begin(),temp.end());
                        res.insert(temp);
                        
                    }
                }
            }
        }
        
        vector<vector<int>> p(res.begin(),res.end());
        return p;
  
        
    }
};