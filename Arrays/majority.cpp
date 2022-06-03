#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int findCandidate(vector<int>& nums,int n){
     
       int count=1;
       int majE=nums[0]; 
        for(int i=1;i<n;i++){
            
            if(nums[i]==majE) count++;
            else count--;
            
            if(count==0) {
                majE=nums[i];
                count=1;
            }   
        }
        
        return majE;
        
    }
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int candidate=findCandidate(nums,n);    
        
        
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==candidate) count++;
        }
        
        if(count>n/2) return candidate;
        
        return 0;
    }
};