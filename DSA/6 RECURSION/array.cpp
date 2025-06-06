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

void printArray(int arr[],int size,int index){
    //base case
    if(index>=size){
        return;
    }
    //processing
    cout<<arr[index]<<" ";
    //recursive call
    printArray(arr,size ,index+1);
} 
 
int main(){
    vector<int>arr ={10,20,30,40,50,60,70,80,90,100};
    int n=arr.size()-1;
    printVector(arr,n);
    cout << "" <<endl;
    int brr[]={50,51,52,53,54,55,56,57,58,59};
    int size=10;
    int index=0;
    printArray(brr,size,index);
    return 0;
}