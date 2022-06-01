#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
  int merge(vector<int>& arr,int l,int mid,int h){
 int m=(mid-l+1);
 int n=h-mid;


int invc=0;
 vector<int> L(m);
 vector<int> R(n);

for(int i=0;i<m;i++){
  L[i]=arr[l+i];
}

for(int i=0;i<n;i++){
  R[i]=arr[mid+i+1];
}


      
  

       int i=0,j=0,k=l;  
        for(int i=0;i<m;i++){
          while(j<n &&  L[i]>2ll*R[j]){
              j++;
              invc+=(m-i);
          }
      }
      

  i=0,j=0,k=l;
while(i<m && j<n){
   if(L[i]<=R[j]){
     arr[k++]=L[i++];
   }else{
     arr[k++]=R[j++];
   
   }
}

while(i<m){
  arr[k++]=L[i++];
}

while(j<n){
   arr[k++]=R[j++];
}

return invc;
}

int mergesort(vector<int>& arr,int l,int h){
  int invc=0;
   if(l<h){
     int mid=l+(h-l)/2;
     invc+=mergesort(arr,l,mid);
     invc+=mergesort(arr,mid+1,h);
     invc+=merge(arr,l,mid,h);
   }

   return invc;
}
    int reversePairs(vector<int>& nums) {
        
       int n=nums.size();
        int res=mergesort(nums,0,n-1);
         for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        return res;
    }
};