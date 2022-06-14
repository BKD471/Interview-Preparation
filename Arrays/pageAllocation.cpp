#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    
    bool isPossible(vector<int> &nums,int weight,int days){
        
        int n=nums.size();
        int sumOfWeights=0;
        int i=0;
        
       
        int cntDays=1;
        while(i<n){
            
            if(nums[i]>weight) return false;
            
            if(sumOfWeights+nums[i]<=weight){
                sumOfWeights+=nums[i];
                 
                
            }else{
               ++cntDays;
                
                sumOfWeights=nums[i];
                
            }
            i++;
           
        }
      
        
        if(cntDays<=days) return true;
        else return false;
       
        
    }
    
    int shipWithinDays(vector<int>& nums, int days) {
        
        int n=nums.size();
      
        
        int sumOfWeights=0;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            sumOfWeights+=nums[i];
            mn=min(mn,nums[i]);
        }
        

      
        int l=mn,h=sumOfWeights;
        
        
        int res=INT_MAX;
        while(l<=h){
            
            int mid=l+(h-l)/2;
             
            if(isPossible(nums,mid,days)){
                h=mid-1;
                res=mid;
            }else{
                l=mid+1;
            }    
        }
        
        return res;
    }
};