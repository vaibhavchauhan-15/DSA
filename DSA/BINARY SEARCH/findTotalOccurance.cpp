#include<bits/stdc++.h>
using namespace std;

int findFirstOccurance(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while (start<=end)
    {   //base case
        // int mid=(start+end)/2;//over flow
        int mid=start + (end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<target){
            //go right
            start=mid+1;
        }else{
            end=mid-1;
        }
        
    }
    
    return ans;
}

int findLastOccurance(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while (start<=end)
    {   //base case
        // int mid=(start+end)/2;//over flow
        int mid=start + (end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<target){
            //go right
            start=mid+1;
        }else{
            end=mid-1;
        }
        
    }
    
    return ans;
}
int main(){
    vector<int > arr={10,30,30,30,30,40,50,60,70,80,90};
    int target=4;
    int result = findFirstOccurance(arr,target);
    int result1 = findLastOccurance(arr,target);
    int Total=result1-result+1;
    cout << "Total Occrance is :"<<Total <<endl;
    return 0;
}