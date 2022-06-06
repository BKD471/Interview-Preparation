#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
         int buy=prices[0],maxProfit=0;
        
        
        for(int i=1;i<n;i++){
            
            if(prices[i]<buy) buy=prices[i];
            else if(prices[i]-buy>maxProfit) maxProfit=prices[i]-buy;
        }
        
        return maxProfit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        vector<int> L(n);
        vector<int> R(n);
        
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            
            if(prices[i]<mn){
                mn=prices[i];
            }
            L[i]=mn;
        }
        
        
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            
            if(prices[i]>mx){
                mx=prices[i];
            }
            R[i]=mx;
        }
        
        
        int maxProfit=INT_MIN;
        
        for(int i=0;i<n;i++){
            int p=R[i]-L[i];
            if(p>maxProfit) maxProfit=p;
        }
        
        return maxProfit;
    }
};