#include<bits/stdc++.h>
using namespace std;

//1st approach without set
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            
           int target1=target-nums[i];
           for(int j=i+1;j<n;j++){
               int target2=target1-nums[j];
               
               
               int l=j+1,h=n-1;
               while(l<h){
                   
                   
                   if(nums[l]+nums[h]==target2){
                       
                       vector<int> temp;
                       temp.push_back(nums[i]);
                       temp.push_back(nums[j]);
                       temp.push_back(nums[l]);
                       temp.push_back(nums[h]);
                       res.push_back(temp);
                       
                         int lv=nums[l];
                         while(l<h && nums[l]==lv) l++;
                   
                         int rv=nums[h];
                         while(l<h && nums[h]==rv) h--;
                   } 
                   else if(nums[l]+nums[h]<target2){
                       l++;
                   }else{
                       h--;
                   }
                   
               }
               
              while(j+1<n && nums[j]==nums[j+1]) j++;  
           }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        
         return res;
        
    }
};


//2nd approach using set
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        set<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                
                
                int l=j+1,h=n-1;
                while(l<h){
                    
                    int s=(long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[h];
                    if(s==target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        
                        res.insert(temp);
                        l++;
                        h--;
                    }else if(s<target){
                        l++;
                    }else{
                        h--;
                    }
                    
                    
                }
                
                
            }
            
        }
        
        vector<vector<int>> answer(res.begin(),res.end());
        
         return answer;
        
    }
};