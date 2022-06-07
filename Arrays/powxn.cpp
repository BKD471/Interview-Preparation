#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        
        long exp=n;
        double res=1.0;
        
        if(n<0)
        {
            exp=-1*exp;
        }
        
        while(exp>0){
            
            if(exp%2==0){
                x*=x;
                exp/=2;
                
            }else{
                res*=x;
                exp-=1;
            }
        }
        
        if(n<0){
            return ((double)(1.0))/((double)(res));
        }
        
        return res;
        
    }
};