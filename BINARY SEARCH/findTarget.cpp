#include<bits/stdc++.h>
using namespace std;
bool findTarget(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]>target){
            //go left
            end=mid-1;
            
        }else{
            //go right
            start=mid+1;

        }
    }
    return false;
    

}

int main(){
    vector<int>arr={21,25,29,38,40,45};
    int target=8;
    int result=findTarget(arr,target);
    if(result==true){
        cout<<"found"<<endl;
    }else{

        cout<<"not found"<<endl;
    }

    return 0;
}