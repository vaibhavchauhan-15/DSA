#include<bits/stdc++.h>
using namespace std;

void count(int n,int z){
    // cout << "Z is :"<<z <<endl;
    //base case
    if(n==z){
        cout<<z<<" ";
        return  ;
    }
    //processing
    // cout<<n <<" ";//tail recursive 
    //recursive call
    count(n-1,z );
    cout<<n <<" ";//head recursive 

    //processing after recursive call then head recursive
    //processing before recursive call then tail recursive
    
}
int main(){
    int n=5;
    int z=-n;
    count(n,z);
    return 0;
}