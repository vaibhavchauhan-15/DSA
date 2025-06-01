#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>arr,int n){
    if(n==0){
        cout<<arr[n]<<" ";
        return;
    }

    printVector(arr,n-1);
    cout<<arr[n]<<" ";
}   

int main(){
    vector<int>arr ={10,20,30,40,50,60,70,80,90,100};
    int n=arr.size()-1;
    printVector(arr,n);
    return 0;
}