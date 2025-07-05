// 890. Find and Replace Pattern
// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.F

#include<bits/stdc++.h>
using namespace std;

void createMapping(string& str){
    char start ='a';
    char map[300]={0};//initially all are null
    //mapping and change the original stirng
    for(auto ch :str){
        if(map[ch]==0){
            map[ch]=start;
            start++;
        }  
    }
    //update the string
    for (int i = 0; i < str.size(); i++) {
        char ch=str[i];
        str[i]=map[ch];
    }
}
vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> ans;
    //first update the patter
    createMapping(pattern);
    
    for(string s : words){
        string tempStr=s;

        //normalize the tempstr
        createMapping(tempStr);
        if(tempStr==pattern){
            ans.push_back(s);
        }

    }
    return ans;
}

int main(){
    vector<string> words={"abc","deq","mee","aqq","dkd","ccc"};
    string pattern="abb";
    vector<string>result=findAndReplacePattern(words,pattern);
    cout << "These are the words who follow  Pattern  :";
    for (int i = 0; i < result.size(); i++) {
        cout<<result[i]<<" ";
    }
    cout <<endl;
    return 0;
}