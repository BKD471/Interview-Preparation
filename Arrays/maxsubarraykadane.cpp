#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        int meh=0,msf=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            meh+=nums[i];
            if(meh>msf){
                msf=meh;
            }
            if(meh<0){
                meh=0;
            }
          
        }
        return msf;
    }
};