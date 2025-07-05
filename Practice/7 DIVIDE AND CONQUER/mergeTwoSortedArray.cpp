#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,5,8,9,12};
    int arr2[]={2,3,4,7,10,11,13};

    int size1=5;
    int size2=7;
    int finalSize=size1 + size2;
    int ans[finalSize];

    int i=0;
    int j=0;
    int k=0;
    //merge both array
    while(i<size1 && j <size2){
        if(arr1[i]<arr2[j]){
            ans[k++]=arr1[i++];
        }else{
            ans[k++]=arr2[j++];
        }
    }
    //copy remaining arr1
    while (i<size1)
    {
        ans[k++]=arr1[i++];
    }

    //copy remaining arr2
    while (j<size2)
    {
        ans[k++]=arr2[j++];
    }
    

    for (int i = 0; i < finalSize; i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}