#include <bits/stdc++.h>
using namespace std;

 void swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    void reverse(vector<int> &nums,int l,int h){
        
        while(l<h){
            swap(&nums[l],&nums[h]);
            l++;
            h--;
        }
    }

vector<int> nextPermutation(vector<int> &nums, int n)
{
     
       
        int idx=INT_MIN;
        
        for(int i=n-1;i>0;i--){
            
            if(nums[i]>nums[i-1]){
                idx=i;
                break;
            }
        }
        
        if(idx==INT_MIN) {
            reverse(nums,0,n-1);
             return nums;   
        }  
        
        int val=nums[idx-1];
    

        reverse(nums,idx,n-1);
        
        
        int mindiff=INT_MAX;
        int nextIndex;
        
        
        for(int i=idx;i<n;i++){
            int diff=nums[i]-val;
            if(nums[i]>val && diff<mindiff){
                 mindiff=diff;
                nextIndex=i;
            }
        }
        
        
        swap(&nums[idx-1],&nums[nextIndex]);
    
         return nums;
}