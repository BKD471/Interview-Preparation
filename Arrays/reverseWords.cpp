#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
      int n=s.length();
        string res="";
       
      int l=0;
      while(l<n){
          
          while(l<n && s[l]==' '){
              l++;
          }
          
          if(l>=n) break;
          
          int m=l;
          
          while(m<n && s[m]!=' '){
              m++;
          }
          
          string temp=s.substr(l,m-l);
        
          if(res.length()==0) res=temp;
          else res=temp+" "+res;
          
          l=m+1;
          
      }  
    
    return res;  
    }
};