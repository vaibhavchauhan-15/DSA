#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int ans=1;
    int power=pow(10,k);
    for (int i = 0; i < n; i++) {
        ans=ans*arr[i];
        if(ans>=power){
            ans=1;
        }
    }
    cout<<ans;
    return 0;
}