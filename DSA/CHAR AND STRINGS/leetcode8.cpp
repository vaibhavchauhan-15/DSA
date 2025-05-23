#include<bits/stdc++.h>
using namespace std;
string str;
bool customCompare(char a , char b){
    if(str.find(a)<str.find(b)){
        return true;
    }
    return false;
}
string customSortString(string order, string s) {
    str=order;
    sort(s.begin(),s.end(),customCompare);
    return s;    
    }
int main(){
    string order ="cba";
    string s= "abcd";
    string result=customSortString(order,s);
    cout << "Final ans is :"<<result <<endl;
    return 0;
}