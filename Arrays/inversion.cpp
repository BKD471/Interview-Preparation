#include<bits/stdc++.h>
using namespace std;

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
while(i<m && j<n){
   if(L[i]<=R[j]){
     arr[k++]=L[i++];
   }else{
     arr[k++]=R[j++];
     invc+=(m-i);
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

int main(){
  vector<int> arr={8,4,2,1};
 int n=arr.size();
 cout<<mergesort(arr,0,n-1);

}