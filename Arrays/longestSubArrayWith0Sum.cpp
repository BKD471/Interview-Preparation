#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > A) {

     unordered_map<int,int> hashMap;
        
        int n=A.size();
        int cumsum=0;
        int maxLength=INT_MIN;
        
        hashMap.insert({0,-1});
        for(int i=0;i<n;i++){
            cumsum+=A[i];
            if(hashMap.find(cumsum)!=hashMap.end()){
                int len=i-hashMap[cumsum];
                maxLength=max(maxLength,len);
            }else{
                 hashMap.insert({cumsum,i});
            }    
        }

        return maxLength==INT_MIN? 0: maxLength;

}