#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
       
        int n=heights.size();
        
        
        for(int i=1;i<n;i++){
            
            int diff=heights[i]-heights[i-1];
            if(diff>0){
                
                if(pq.size()<ladders) pq.push(diff);
                else{
                    
                    int br=diff;
                    if(!pq.empty()  && diff>pq.top()){
                        
                        br=pq.top();
                        pq.pop();
                        pq.push(diff);
                    }
                   if(bricks-br>=0){
                       bricks-=br;
                   }else{
                       return i-1;
                   }
                }
            }
            
            
        }
        
        return n-1;
        
        
        
    }
};