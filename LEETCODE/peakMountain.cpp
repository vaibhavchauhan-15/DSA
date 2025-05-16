#include<bits/stdc++.h>
using namespace std;
int findPeak(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    while (start<end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid + 1;//line A(Increasing) then go right
        }else{
            end=mid;//Line B(Decreasing) or Peak then go left
        }  

    }
    return end;
    
}
int main(){
    vector<int> arr={10,20,30,40,30};
    cout<<"Peak Element at Index :"<<findPeak(arr);
    return 0;
}