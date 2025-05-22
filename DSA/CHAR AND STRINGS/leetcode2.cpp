// 1910. Remove All Occurrences of a Substring
#include<bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
      while (s.find(part)!=string::npos){
        s.erase(s.find(part),part.length());
      }
      return s;   
    }
int main(){
    string s="daabcbaabcbc";
    string part = "abc";
    string result = removeOccurrences(s,part);
    cout<<"Final Occurance is :"<<result;
    return 0;
}