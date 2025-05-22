//1047. Remove All Adjacent Duplicates In String
#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(const string& S){
    string ans;
    int index=0;
    while(index<=S.length()){
        //check ans ka currect char and S ka last char same hai ya nahi
        if(!S.empty() && S.back()==ans[index]){//same
            //pop
            ans.pop_back();
        }else{
            //same nahi hai to push kar do
            ans.push_back(S[index]);
        }
        index ++;
    }
    return ans;
}
int main(){
    string s="abbaca";
    string result =removeDuplicate(s);
    cout << "Final ans is :"<<result <<endl;
    return 0;
} 