#include<iostream>
#include<algorithm>
using namespace std;

void translate(string& s,string& t){

    string rev=s;
    reverse(rev.begin(),rev.end());

    if(rev==t){
        cout << "YES" <<endl;
    }else{

        cout << "NO" <<endl;  
    }
}

int main(){
    string s ,t;cin>>s>>t;
    translate(s,t);
    return 0;
}