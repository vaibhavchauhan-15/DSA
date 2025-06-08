#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int countA=0;
    int countD=0;
    for(char ch : s){
        if( ch == 'A') countA++;
        if( ch == 'D') countD++;

    }
    if(countA==countD) cout<<"Friendship";
    else if(countA>countD) cout<<"Anton";
    else cout<<"Danik";
    return 0;
}