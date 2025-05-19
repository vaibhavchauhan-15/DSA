#include<bits/stdc++.h>
using namespace std;
int findTarget(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            //go left
            end=mid-1;
            
        }else{
            //go right
            start=mid+1;

        }
    }
    return -1;
    

}

int main(){
    vector<int>arr={21,25,29,38,40,45};
    int target=38;
    int result=findTarget(arr,target);
    if(result==-1){
        cout<<"Not Found"<<endl;
    }else{
        
        cout<<"Found at Index :"<<result<<endl;
    }

    return 0;
}