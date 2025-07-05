#include<bits/stdc++.h>
using namespace std;

int searchArray(int arr[],int size,int index,int target){
    //base case
    if(index>=size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    //processing
    //recursive call
    searchArray(arr,size ,index+1,target);
} 
 
int main(){
    int brr[]={50,51,52,53,54,55,56,57,58,59};
    int size=10;
    int index=0;
    int target=59;
   cout<<"Target found at Index :"<< searchArray(brr,size,index,target);
    return 0;
}