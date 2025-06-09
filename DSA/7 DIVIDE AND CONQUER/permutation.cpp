#include<iostream>
#include<string>

using namespace std;

void solve(string s,int index){
    //base case
    if(index==s.size()){
        cout<<s<<" ";
        return ;
    }
    //calculation
    for (int i = index; i < s.size(); i++) {
        swap(s[i],s[index]);
        // recursive call
        solve(s,index+1);
        // swap(s[i],s[index]);//backtrack
    }
}

int main(){
    string s="abc";
    solve(s,0);
    return 0;
}