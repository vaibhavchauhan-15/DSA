#include<iostream>
#include<vector>
using namespace std;

void insertEvenInVector(int arr[],int n, int i,vector<int>& vrr){
    //base case
    if(i>=n){
        return;
    }
    //processing
    if(arr[i]%2==0){
        vrr.push_back(arr[i]);
    }
    //recursive call
    insertEvenInVector(arr,n,i+1,vrr);
}

void insertOddInVector(int arr[],int n, int i,vector<int>& vrr){
    //base case
    if(i>=n){
        return;
    }
    //processing
    if(arr[i]%2!=0){
        vrr.push_back(arr[i]);
    }
    //recursive call
    insertOddInVector(arr,n,i+1,vrr);
}

int main(){
    int arr[]={1,5,22,4,6,12,3,3,64,51265,651,12,1,2}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    vector<int>vrr;
    vector<int>brr;
    insertEvenInVector(arr,n,i,vrr);
    insertOddInVector(arr,n,i,brr);
    cout << "EVEN NUMBER ARE :";
    for (int i = 0; i < vrr.size(); i++) {
       cout<<vrr[i]<<" "; 
    }
    cout <<endl<< "ODD NUMBER ARE :";
    for (int i = 0; i < brr.size(); i++) {
       cout<<brr[i]<<" "; 
    }
    return 0;
}