#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int res;
        for(int i=0;i<n;i++){
            
            int index=abs(nums[i])-1;
            nums[index]=-nums[index];
            if(nums[index]>0){
                res=i;
                break;
            }
        }
        
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        
        return nums[res];
        
    }
};