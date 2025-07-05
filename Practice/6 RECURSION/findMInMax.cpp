#include<bits/stdc++.h>
using namespace std;

void minArray(int arr[],int size,int index,int& mini){
    //base case
    if(index>=size){
        return ;
    }
    //processing
    mini=min(mini,arr[index]);
    //recursive call
    minArray(arr,size ,index+1,mini);
} 
int maxArray(int arr[],int size,int index,int& maxi){
    //base case
    if(index>=size){
        return maxi;
    }
    //processing
    if(arr[index]>maxi){
        
        maxi=arr[index];
    }
    //recursive call
    maxArray(arr,size ,index+1,maxi);
} 
 
int main(){
    int brr[]={50,51,52,530,54,55,56,57,58,59};
    int size=10;
    int index=0;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    minArray(brr,size,index,mini);
    maxArray(brr,size,index,maxi);
    cout << "MInimum num in array is :"<<mini <<endl;
    cout<<maxArray(brr,size,index,maxi);
    return 0;
}