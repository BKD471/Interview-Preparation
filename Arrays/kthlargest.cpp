#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void maxHeapify(int arr[],int  root,int n){

 int largest=root;
int l=(2*root+1);
int r=(2*root+2);
if(l<n && arr[l]>arr[root]) largest=l;
if(r<n && arr[r]>arr[largest]) largest=r;
if(root!=largest){
  swap(&arr[root],&arr[largest]);
  maxHeapify(arr,largest,n);
}
}


void   buildHeap(int arr[],int n){
 
  for(int i=n/2-1;i>=0;i--){
     maxHeapify(arr,i,n);
  }

}


int kthLargest(int arr[],int k,int n){

   buildHeap(arr,n);
  
    int maxe;
    while(k--){
       maxe=arr[0];
       swap(&arr[0],&arr[n-1]);
       n-=1;
       maxHeapify(arr,0,n);
    }
   return maxe;
}

int main(){
    int arr[]={3,2,3,1,2,4,5,5,6,7,7,8,2,3,1,1,1,10,11,5,6,2,4,7,8,5,6};
    int k=20;
  int n=sizeof(arr)/sizeof(arr[0]);
  int  res=kthLargest(arr,k,n);
  cout<<res;
}