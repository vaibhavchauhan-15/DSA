#include<iostream>
#include<string>

using namespace std;

void solve(string s,int i){
    //base case
    if(i==s.size()){
        cout<<s<<" ";
        return ;
    }
    //calculation
    for (int j = i; j < s.size(); j++) {
        swap(s[j],s[i]);
        // recursive call
        solve(s,i+1);
        // swap(s[i],s[index]);//backtrack
    }
}

int main(){
    string s="abc";
    solve(s,0);
    return 0;
}