#include<bits/stdc++.h>
using namespace std;
bool IsOnTime(int A ,int B ,int C ,int D){
    if(C<A ) return true;
    if(A==C && B>D){
        return true;
    }
    return false;
}
int main(){
    int A,B,C,D;cin>>A>>B>>C>>D;
    bool result=IsOnTime(A,B,C,D);
    if(result==true){
        cout << "Yes" <<endl;
    }else{

        cout << "No" <<endl;
    }
    return 0;
}