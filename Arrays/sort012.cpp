#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    void sortColors(vector<int>& nums) {
        //i will
        
        int n=nums.size();
        int l=0;
        int h=n-1;
        int i=0;
        while(i<=h){
            
            
            if(nums[i]==0){
                swap(&nums[l],&nums[i]);
                l++;
                i++;
            }else if(nums[i]==1){
                i++;
            }else{
                swap(&nums[h],&nums[i]);
                h--;
            }
        }
    }
};