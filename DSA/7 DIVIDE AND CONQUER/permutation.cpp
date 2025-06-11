#include<iostream>
#include<string>

using namespace std;

void solve(string s,int i,int& count){
    //base case
    if(i==s.size()){
        cout<<s<<" ";
        count++;
        return ;
    }
    //calculation
    for (int j = i; j < s.size(); j++) {
        swap(s[j],s[i]);
        // recursive call
        solve(s,i+1,count);
        //backtrack
        swap(s[j],s[i]);//make it original string when backtract
    }
}

int main(){
    // string s="abc";
    string s;cin>>s;
    int count = 0;//count the total possible string
    solve(s,0,count);
    cout <<endl<< "Total Sting is : "<<count <<endl;
    return 0;
}