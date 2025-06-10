#include<iostream>
using namespace std;

int minWidth(int arr[] , int n , int h){
    int width=0;
    for (int i = 0; i < n; i++) {
        if(arr[i]>h){
            width+=2;
        }else{
            width+=1;

        }
    }
return width;
}


int main(){
    int n,h;cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
   cout<< minWidth(arr,n,h);
    return 0;
}