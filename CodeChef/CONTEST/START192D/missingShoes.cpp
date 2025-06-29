#include<iostream>
using namespace std;
int main(){
    int l,r;cin>>l>>r;
    if(l==r){
        cout<<0<<endl;
    }else {
        cout<<abs(l-r)<<endl;
    }
    return 0;
}