#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Here use only  hashmap    sliding window wont work with negative numbers
class Solution{
    public:
    int lenOfLongSubarr(int nums[],  int n, int target) 
    { 
        // Complete the function
        
        
         int left=0,high=0;
        int prefixSum=0;
        int len=INT_MIN;
        
        unordered_map<int,int> mp;
        
        mp[0]=-1;
        
        for(int i=0;i<n;i++){
            
         prefixSum+=nums[i];
         
         int key=prefixSum-target;
         
         if(mp.find(key)!=mp.end()){
             int r=mp[key];
             len=max(len,i-r);
             
         }
            //  mp[prefixSum]=i;
           if(mp.find(prefixSum)==mp.end())
	         {
	         mp[prefixSum]=i;
	         }
         
        }
        
        
        
        return len==INT_MIN? 0:len;
    } 

};