#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&arr){
//2nd element se compartison chalu karo aur
//left me jitne bhi element hai usase compare karo
//aur key value ko usako jagah pe rakh do
    int n=arr.size();
    for (int i = 1; i < n; i++) {//n-1 times comparison
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
        }
    }
    //print sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i]<< " ";
    }
}
int main(){
    vector<int>arr={5,4,3,2,1,-8};
    insertionSort(arr);
    return 0;
}