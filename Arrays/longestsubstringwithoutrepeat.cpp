#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
      
        vector<int> hashMap(256,-1);
        
        int l=0,r=0,len=0;
        while(r<n){
            
            if(hashMap[s[r]]!=-1){
                l=max(l,hashMap[s[r]]+1);
            }
            
            hashMap[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        
        return len;
    }
};