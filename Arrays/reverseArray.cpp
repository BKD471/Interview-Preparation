#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){

  int l=0,h=n-1;
  while(l<=h){
     int t=arr[l];
     arr[l]=arr[h];
     arr[h]=t;
     l++;
     h--;
  }
}

string reverseWord(string str){
  string s="";
  int n=str.length();
  for(int i=n-1;i>=0;--i){
      s+=str[i];
  }
  return s;
  
}

int main(){
 int arr[]={23,1,2,3,4,5};
 int n=sizeof(arr)/sizeof(arr[0]);
 reverseArray(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
   
}