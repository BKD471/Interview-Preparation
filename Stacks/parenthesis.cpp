#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
           int n=s.length();
        vector<char> stack;
        
        for(int i=0;i<n;i++){
            
            char ch=s[i];
            if(ch=='[' || ch=='{' || ch=='('){
               stack.push_back(ch);  
            }else{
                
                if(stack.empty()) return false;
                
               char last=stack.back();
                if( !((last=='(' && ch==')') || (last=='{' && ch=='}') || (last=='[' && ch==']'))) return false;
                
                stack.pop_back();
            }
        }
        if(!stack.empty()) return false;
        return true;
    }
};