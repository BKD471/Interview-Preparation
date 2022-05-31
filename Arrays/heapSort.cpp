#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}



void maxHeapify(int arr[],int  root,int size){
  
   int  largest=root;
   int l=(2*root+1);
   int r=(2*root+2);
   if(l<size && arr[l]>arr[root])  largest=l;
   if(r<size && arr[r]>arr[largest]) largest=r;
   if(largest!=root){
      swap(&arr[largest],&arr[root]);
      maxHeapify(arr,largest,size);
   }
 
}

void buildHeap(int arr[],int n){

   for(int i=n/2-1;i>=0;i--){
   maxHeapify(arr,i,n);
   }

for(int i=n-1;i>=0;i--){
  swap(&arr[0],&arr[i]);
  maxHeapify(arr,0,i);
}

}




int main(){
  int arr[]={4,1,6,2,8,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  buildHeap(arr,n);

 for(int i=0;i<n;i++){
   cout<<arr[i]<<' ';
 }

}