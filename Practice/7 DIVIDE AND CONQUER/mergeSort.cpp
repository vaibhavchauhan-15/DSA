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
    int k=s;//k is the starting element in the original array
    for (int i = 0; i < lenLeft; i++) {
        left[i]=arr[k++];  
    }

    //copy elememt for right array
    k =mid+1;//starting element for right array
    for (int i = 0; i < lenRight; i++) {
        right[i]=arr[k++];  
    }

    //merge sort logic
    int i=0;//left index
    int j=0;//right index
    int m=s;//main array index
    while(i<lenLeft && j < lenRight){
        if(left[i]<right[j]){
            arr[m++]=left[i++];
        }else{
            arr[m++]=right[j++];

        }
    }


    //copy remaing left array element 
    while(i<lenLeft){
        arr[m++]=left[i++];
    }
    
    //copy remaing right array element 
    while(j<lenRight){
        arr[m++]=right[j++];
    }

    //free memory of left and right array
    delete[] left;
    delete[] right;
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