#include<bits/stdc++.h>
using namespace std;

void subSetSum3(int arr[] , int n){
    bool flag=false;
    int sum=0;
    for (int i = 0; i < n; i++) {
        int j;
        if(i+1<=n){

             j=i+1;
        }
        while(j<=n) {
            sum=sum + arr[j];
            j++;
        }
        if(sum%3==0){
            flag=true;
        }
        sum=0;
    }
    if(flag){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i]; 
        }
        subSetSum3(arr,n);
    }
    return 0;
}