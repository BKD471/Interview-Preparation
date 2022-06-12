#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<long,long> mp;
        int l=0,h=0;
        
        int sum=0;
        int ms=0;
        while(h<n){
           
            int key=nums[h]; 
            if(mp.find(key)==mp.end()){
                sum+=key;
                  mp[key]=h;
                ms=max(ms,sum);
                h++; 
            }else{
                sum-=nums[l];
                mp.erase(nums[l]);
                ms=max(ms,sum);
                l++;
                
            }
                   
        }
       return ms; 
    }
};



class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<long,long> mp;
        int l=0,h=0;
        
        int sum=0;
        int ms=0;
        while(h<n){
           
         
            if(mp.find(nums[h])==mp.end()){
                
                sum+=nums[h];
                  mp[nums[h]]=h;
                ms=max(ms,sum);
            }else{
               
                
               while(nums[h]!=nums[l]){
                   sum-=nums[l];
                   mp.erase(nums[l]);
                     l++;
               }
                sum-=nums[l];
                mp.erase(nums[l]);
                l++; 
                sum+=nums[h];
                ms=max(ms,sum);
                mp[nums[h]]=h;
                
            }
              h++;      
        }
       return ms; 
    }
};