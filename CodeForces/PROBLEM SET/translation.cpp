#include<iostream>
#include<algorithm>
using namespace std;

void translate(string s,string t){
    
    reverse(s.begin(),s.end());

    if(s==t){
        cout << "Yes" <<endl;
    }else{

        cout << "No" <<endl;  
    }
}

int main(){
    string s ,t;cin>>s>>t;
    translate(s,t);
    return 0;
}