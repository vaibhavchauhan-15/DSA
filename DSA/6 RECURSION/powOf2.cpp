#include<bits/stdc++.h>
using namespace std;

int pow(int a ,int n){
    //base case
    if(n==0){
        return 1;
    }
    //processing and recursive call
    int ans = a * pow(a,n-1);
    return ans;
}

int main(){
    cout << "Enter two number want to power :";
    int a,n;cin>>a>>n;
    cout<<"Power of "<<a<<" is :"<<pow(a,n);
    return 0;
}