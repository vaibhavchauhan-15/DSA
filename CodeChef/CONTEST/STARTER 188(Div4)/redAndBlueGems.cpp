#include<bits/stdc++.h>
using namespace std;

int maxCoin(int r,int b,int p,int q){
    int redCoin=r*p;
    int blueCoin=b*q;
    return max(redCoin,blueCoin);
}

int main(){
    int r,b,p,q;cin>>r>>b>>p>>q;
    cout << "Maximum coin is :"<<maxCoin(r,b,p,q) <<endl;
    return 0;
}