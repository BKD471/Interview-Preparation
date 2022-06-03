#include <bits/stdc++.h> 
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	// Write your code here 
    int maxe=n+1;
    
    int missing,repeating;
    for(int i=0;i<n;i++){
        int index=(nums[i]%maxe)-1;
        nums[index]+=maxe;
    }
    
    for(int i=0;i<n;i++){
        if(nums[i]<maxe){
            missing=i+1;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        
        if(nums[i]>2*maxe){
            repeating=i+1;
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        int element=(nums[i]%maxe);
        nums[i]=element;
    }
    

    
    pair<int,int> result(missing,repeating);
    return result;
}
