// 33. Search in Rotated Sorted Array
#include<bits/stdc++.h>
using namespace std;
int findPivotIndex(vector<int>arr ){
    int n=arr.size();
    int start=0;
    int end=n-1;
    if(n==0) return 0;
    if(n==1) return 0;
    while (start<=end)
    {
        int mid=start + (end - start)/2;
        if(start==end){
            return start;
        }
        if(mid+1 > n && arr[mid]>arr[mid+1]){//use valid index if n=1 then
            return mid;                      //mid+1 not accesible                                      
        }else if(mid-1 >=0  && arr[mid]<arr[mid-1]){
            return mid-1;
        }else if(arr[start]>arr[mid]){
            end=mid-1;
        }else{
            start = mid+1;
        }
    }
    
    return -1;
}
int binarySearch(vector<int>arr,int target,int start , int end){
    // int n=arr.size();
    // int start=0;
    // int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start +(end -start )/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            //go left
            end=mid-1;
        }else{
            //go right
            start=mid+1;
        }
    }
    return -1;
}
int search(vector<int>arr , int target){
    int pivot=findPivotIndex(arr);
    int ans=-1;
    //line A
    if(arr[0]<=target && arr[pivot]>=target){
        ans=binarySearch(arr,target,0,pivot);
    }
    else{
        ans=binarySearch(arr,target,pivot+1,arr.size()-1);
        
    }
    return ans;
}
int main(){
    // vector<int>arr={3,4,5,6,7,0,1,2,3};
    vector<int>arr={1,3};
    int target=0;
    int index=findPivotIndex(arr);
    cout << "Pivot Index Found at index :"<<index <<endl;
    int result=search(arr,target);
    cout << "Target Element Found at Index :"<<result <<endl;
    return 0;
}