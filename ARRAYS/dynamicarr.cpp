#include<bits/stdc++.h>
using namespace std;
void print(int arr[] ,  int n){
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int * arr=new int [n];
    // cout<<"Size is :"<<sizeof(arr);
    print(arr , n);
}