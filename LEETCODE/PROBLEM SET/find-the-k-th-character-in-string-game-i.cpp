#include <iostream>
#include<string>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.length()<k){
            int n=word.size();
            
            for (int i = 0; i < n; i++) {
                char ch = (word[i]=='z') ? 'a':word[i]+1;
                word.push_back(ch); 
            }

        } 
        return word[k-1];  
    }
};

int main() {
    Solution sc;
    int k=200;
    cout<<sc.kthCharacter(k)<<endl;
    return 0;
}