#include<iostream>
using namespace std;

int numReduce(int x){
    while(true){

        if(x>3){
            x-=3;
        }else if(x%2==0){
            x=x/2;
        }else{
            break;
        }
    }
    return x;
}

int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        cout<<numReduce(x)<<endl;
    }
    return 0;
}