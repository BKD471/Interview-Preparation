#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    bool isPossible(vector<int>& nums,int gap,int cowCount){
        
        int n=nums.size();
        int cnt=1;
        
        int i=1;
        int left=0;
        while(i<n){
         
            if(nums[i]-nums[left]>=gap){
                cnt++;
                left=i;
            }
            i++;
        }
        if(cnt<cowCount) return false;
        else return true;
        
        
    }
    int maxDistance(vector<int>& nums, int m) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int lowestGap=1,highestGap=nums[n-1]-nums[0];
        
        int op=0;
        while(lowestGap<=highestGap){
            
            
            int gapToCheck=lowestGap+(highestGap-lowestGap)/2;
            
            if(isPossible(nums,gapToCheck,m)){
                lowestGap=gapToCheck+1;
                op=gapToCheck;
            }else{
                highestGap=gapToCheck-1;
            }
          
          
        }
        return op;
    }
};