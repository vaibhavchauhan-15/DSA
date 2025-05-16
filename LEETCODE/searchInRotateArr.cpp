#include<bits/stdc++.h>
using namespace std;
int findPivotElement(vector<int>arr,int target,int start,int end){
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            //go right
            start=mid+1;

        }else{
            
        }
    }
    
}
int main(){
    vector<int>arr={4,5,6,7,0,1,2};//pivot=0
    int target=0;
    int start=0;
    int end=arr.size()-1;
    int result = findPivotElement(arr,target,start,end);
    return 0;
}