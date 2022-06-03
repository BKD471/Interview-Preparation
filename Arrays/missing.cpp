#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
       int n=nums.size();

      int maxe=n+1;
    
    int missing=INT_MIN;
    for(int i=0;i<n;i++){
        int index=(nums[i]%maxe);
        if(index>=n) continue;
        nums[index]+=maxe;
    }
    
       
        
    for(int i=0;i<n;i++){
        if(nums[i]<maxe){
            missing=i;
             break;
        }
    }
        
    for(int i=0;i<n;i++){
        int e=(nums[i]%maxe);
        nums[i]=e;
    }    
        

        
        return  missing!=INT_MIN? missing:n;
    }
};