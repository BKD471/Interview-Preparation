#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
         
            int l=i+1;
            int h=n-1;
            while(l<h){
                
                int target=nums[i]+nums[l]+nums[h];
                if(target==0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[h]);
                    res.push_back(temp);
                  
                    
                    int lv=nums[l];
                    while(l<h && nums[l]==lv) l++;
                    
                    int rv=nums[h];
                    while(l<h && nums[h]==rv) h--;
                    
                    
                }else if(target<0) l++;
                else h--;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        
        return res;
    }
};