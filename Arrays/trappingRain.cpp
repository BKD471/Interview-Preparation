#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        
        
        int n=height.size();  
        int l=0;
        int h=n-1;

        int waterCount=0;
        int lm=INT_MIN;
        int rm=INT_MIN;
        
        
        while(l<=h){
            
            if(height[l]<=height[h]){
                
                if(height[l]>lm){
                    lm=height[l];
                }else{
                    waterCount+=lm-height[l];
                }
                
                l++;
            }else{
                
                
                if(height[h]>rm){
                    rm=height[h];
                }else{
                    waterCount+=rm-height[h];
                }
                h--;
            }
        }
        
        return waterCount;
    }
};