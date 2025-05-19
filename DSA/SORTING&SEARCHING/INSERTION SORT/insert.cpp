#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    //compare with adjecent and swap them
    int n=arr.size();
    for (int i = 0; i < n; i++) {//n-1 times comparison
        for (int j =0; j < n-i-1; j++) {
            if(arr[j]>arr[j+1] && j+1 <n-i){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
    //print sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i]<< " ";
    }
}
int main(){
    vector<int>arr={5,4,3,2,1,-8};
    bubbleSort(arr);
    return 0;
}