#include<bits/stdc++.h>
using namespace std;

int find(vector<int>& arr ,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid=start +(end-start)/2;
        if(mid-1>=0 && arr[mid-1]==target) return mid-1;
        if(arr[mid]==target) return mid;
        if(mid+1 <n && arr[mid+1]==target) return mid+1;
        if(target>arr[mid]){
            start=mid+2;
        }
        else {
            end=mid-2;
        }    
    }
    return -1;
    
}
int main(){
    vector<int>arr={20,10,30,50,40,70,60};
    int target=20;
    int ans=find(arr,target);
    if(ans!=-1){
        cout << "Target Found at Index :"<<ans <<endl;
    }else{
        cout << "Not Found" <<endl;
    }

    return 0;
}