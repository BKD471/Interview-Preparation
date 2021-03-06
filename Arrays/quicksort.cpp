
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
     public:
           void swap(int * a,int*  b){
    int t=*a;
     *a=*b;
    *b=t;
}
    
    
    
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int l, int h)
    {
          if(l<h){
         int j=partition(arr,l,h);
         quickSort(arr,l,j-1);
         quickSort(arr,j+1,h);
      }
    }
    
    public:
    int partition (int arr[], int l, int h)
    {
        int pivot=arr[h];
   int j=l;
   for(int i=l;i<h;i++){
     if(arr[i]<=pivot){
       swap(&arr[i],&arr[j]);
        j++;
     }
   }
   swap(&arr[j],&arr[h]);
   return j;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    } 
    Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  