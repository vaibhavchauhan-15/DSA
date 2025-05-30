#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans;
    if(n==1){//base case
        return 1;
    }
    ans= n * fact(n-1);//recursive call
    return ans;
}

int main(){
    int n=5;
    cout<<fact(n)<<endl;
    cout<<5*4*3*2*1;
    return 0;
}