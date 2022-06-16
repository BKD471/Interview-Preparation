#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        
        
        int ln=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            if(mp.find(nums[i]-1)==mp.end()){
                
                int l=nums[i];
                int cnt=1;
                while(mp.find(l+1)!=mp.end()){
                    l++;
                    cnt++;
                }
                ln=max(ln,cnt);
            }
        }
        
        return ln==INT_MIN? 0:ln;
        
    }
};