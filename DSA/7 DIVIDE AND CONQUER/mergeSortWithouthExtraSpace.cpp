#include<iostream>
using namespace std;
void merge(int arr[],int s ,int e){

    //break
    int mid=(s+e)/2;

    //length of left , right array
    int lenLeft=mid-s+1;
    int lenRight=e-mid;

    //merge sort logic
    int i=0;//left index
    int j=mid+1;//right index
    int m=s;//main array index
    while(i<lenLeft && j < lenRight){
        if(arr[i]<arr[j]){
            arr[m++]=arr[i++];
        }else{
            arr[m++]=arr[j++];

        }
    }

    //copy remaing left array element 
    while(i<lenLeft){
        arr[m++]=arr[i++];
    }
    
    //copy remaing right array element 
    while(j<lenRight){
        arr[m++]=arr[j++];
    }
}

void mergeSort(int arr[] , int s , int e){
    //base case
    if(s>=e){
        return;
    }
    //break into half
    int mid=(s+e)/2;
    //recursive call for left array
    mergeSort(arr,s,mid);
    //recursive call for right array
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int arr[]={1,12,6,8,7,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=size-1;
    cout << "before merge sort :";
    for (int i = 0; i < size; i++) {
        cout <<arr[i]<< " ";
    }
    mergeSort(arr,s,e);
    cout  <<endl<< "after merge sort :";
    for (int i = 0; i < size; i++) {
        cout <<arr[i]<< " ";
    }
    return 0;
}