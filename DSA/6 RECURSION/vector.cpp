#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>&arr,int brr[] ,int size ,int index){
    if(index>=size){
        return;
    }
    arr.push_back(brr[index]);
    printVector(arr,brr,size,index+1);
} 


 
int main(){
    vector<int>arr;
    cout << "vector before function call :";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    cout << "" <<endl;
    int brr[]={50,51,52,53,54,55,56,57,58,59};
    int size=10;
    int index=0;
    printVector(arr,brr,size,index);
    cout << "vector after function call :";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<" ";
    }
    cout << "" <<endl;
    return 0;
}