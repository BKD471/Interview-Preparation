
#include<bits/stdc++.h>
using namespace std;

struct Pair{
  int min;
  int max;
};

// less optimized linear
Pair findMinMax(int arr[],int n){
      
    struct Pair minmax;

    if(n==1){
      minmax.min = arr[0];
      minmax.max = arr[0];
      return minmax;
    }

    if(arr[0]>arr[1]){
      minmax.min = arr[1];
      minmax.max = arr[0];
    }else{
      minmax.min = arr[0];
      minmax.max = arr[1];
    }

    for(int i=2;i<n;i++){

       if(arr[i]>minmax.max)  minmax.max=arr[i];
       else if(arr[i]<minmax.min)  minmax.min=arr[i];
    }

 return minmax;
};

//mores optimized compare in pairs
Pair maxMinFinder(int arr[],int n){

  struct Pair maxmin;
  int i;
     if(n%2==0){
        if(arr[0]>arr[1]){
          maxmin.max=arr[0];
          maxmin.min=arr[1];
        }else{
          maxmin.max=arr[1];
          maxmin.min=arr[0];
        }
        i=2;
     }else{
       maxmin.max=arr[0];
       maxmin.min=arr[0];
       i=1;
     }

     while(i<n-1){
       if(arr[i]>arr[i+1]){
          if(arr[i]>maxmin.max)  maxmin.max=arr[i];
          if(arr[i+1]<maxmin.min)  maxmin.min=arr[i+1];
       }else{
         if(arr[i+1]>maxmin.max) maxmin.max=arr[i+1];
         if(arr[i]<maxmin.min)  maxmin.min=arr[i];
       }
       i+=2;
     }

     return maxmin;
}

int main(){
 int arr[]={2,3,1,4,7,9,99,12,32};
 int n=sizeof(arr)/sizeof(arr[0]);
 //struct  Pair minmax=findMinMax(arr,n);
 struct  Pair  minmax=maxMinFinder(arr,n);
 cout<<minmax.min<<" "<<minmax.max<<endl;


}






