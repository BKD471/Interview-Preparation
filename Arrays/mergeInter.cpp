#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> stack;
        
        for(int i=0;i<intervals.size();i++){
            
            if(stack.empty() || stack.back()[1]<intervals[i][0]){
                
              vector<int> temp={
                  intervals[i][0],
                  intervals[i][1]
              };  
              stack.push_back(temp);
            }else{
                stack.back()[1]=max(stack.back()[1],intervals[i][1]);
            }
        }
        
        return stack;
    }
};