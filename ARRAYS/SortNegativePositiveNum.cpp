#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-1,8,-5,32,-4,-2,-4,-5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i] , arr[j]);
            j++;

        }
    }
    cout<<"Sorted Array is:";
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
}