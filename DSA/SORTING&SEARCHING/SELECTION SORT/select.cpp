#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    //select one min element then swap with ith element
    int n=arr.size();
    int minIndex=0;//let arr[0] is smallest element
    for (int i = 0; i < n; i++) {
        for (int j =i+1; j < n; j++) {
            if(arr[j]<arr[minIndex]){
                minIndex=j;//store smallest element compare to arr[0] element
            }  
        }
        swap(arr[i],arr[minIndex]);//swap arr[i] with arr[minIndex]
    }
    //print sorted array
    for (int i = 0; i < n; i++) {
        cout <<arr[i]<< " ";
    }
}


int main(){
    vector<int>arr={5,4,3,2,1,-8};
    selectionSort(arr);
    return 0;
}