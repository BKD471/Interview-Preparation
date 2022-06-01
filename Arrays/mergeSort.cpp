#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int l,int mid,int h){
 int m=(mid-l+1);
 int n=h-mid;

 vector<int> L(m);
 vector<int> R(n);

for(int i=0;i<m;i++){
  L[i]=arr[l+i];
}

for(int i=0;i<n;i++){
  R[i]=arr[mid+i+1];
}

int i=0,j=0,k=l;
while(i<m && j<n){
   if(L[i]<R[j]){
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
}

void mergesort(vector<int>& arr,int l,int h){
   if(l<h){
     int mid=l+(h-l)/2;
     mergesort(arr,l,mid);
     mergesort(arr,mid+1,h);
     merge(arr,l,mid,h);
   }
}

int main(){
  vector<int> arr={3,1,4,9,8,6,2};
 int n=arr.size();
 mergesort(arr,0,n-1);
 for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
 }
}