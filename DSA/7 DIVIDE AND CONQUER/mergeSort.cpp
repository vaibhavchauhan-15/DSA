#include<iostream>
using namespace std;
void merge(int arr[],int s ,int e){

    //break
    int mid=(s+e)/2;

    //length of left , right array
    int lenLeft=mid-s+1;
    int lenRight=e-mid;

    //create left and right array
    int *left=new int [lenLeft];
    int *right=new int [lenRight];

    //copy original value into left and right array

    //merge sort logic


    //copy remaing left array element 
    
    //copy remaing right array element 


    //free memory of left and right array
}

void mergeSort(int arr[] , int s , int e){
    //base case
    if(s>=e){
        return;
    }
    //break
    int mid=(s+e)/2;
    //recursive call for left array
    mergeSort(arr,s,mid);
    //recursive call for right array
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}

int main(){
    int arr[]={1,5,6,8,7,5,2,3,9};
    int size=9;
    int s=0;
    int e=size-1;
    mergeSort(arr,s,e);
    return 0;
}