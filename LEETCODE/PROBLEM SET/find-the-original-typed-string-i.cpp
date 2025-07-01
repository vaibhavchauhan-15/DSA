#include<iostream>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        for (int i = 0; i < word.size(); i++) {
            if(i <word.size() && i-1 >= 0 && word[i]==word[i-1] ){
                count++;
            }
        }
        return count;
    }
};
int main(){
    string word="aaaa";
    Solution sc;
    cout<<sc.possibleStringCount(word)<<endl;
    return 0;
}