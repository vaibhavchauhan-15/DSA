#include<bits/stdc++.h>
using namespace std;

void sqYear(string s){
    
    int number = stoi(s);  
    int sum=0;  
    for (int i = 0; i < 100; i++) {
        if(i*i==number){
            sum=i;
            cout<<0 <<" " <<sum<<endl;
            return;
        }
    }
    cout << "-1" <<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        sqYear(s);
    }
    
    return 0;
}