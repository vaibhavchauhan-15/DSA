// 2942. Find Words Containing Character
// Input: words = ["leet","code"], x = "e"
// Output: [0,1]
// Explanation: "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.
#include<bits/stdc++.h>
using namespace std;
vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> ans;
    int i;
    for ( i = 0; i < words.size(); i++) {
        string curr = words[i];
        for(auto ch : curr){
            if(ch==x){
                ans.push_back(i);
                break;
            }
        }
    } 
    return ans;      
}

int main(){
    vector<string> words = {"leet","code"};
    char x ='e';
    vector<int> result=findWordsContaining(words ,x);
    cout << "Output are :";
    for (int i = 0; i < result.size(); i++) {
        cout<<result[i]<<" ";
    }

    return 0;
}