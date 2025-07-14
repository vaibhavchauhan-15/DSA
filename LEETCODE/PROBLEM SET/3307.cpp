#include <iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        string word="a";
        int n=operations.size();
        int i=0;
        while (i<n)
        {
            if(operations[i++]==0){
                word.append(word);
            }else{
                int m=word.size();
                for (int i = 0; i < m; i++) {
                    char ch=(word[i]=='z') ? 'a':word[i]+1;
                    word.push_back(ch); 
                }
            }
        }
        return word[k-1];
          
    }
};

int main() {
    int long long k=10;
    vector<int>op={0,1,0,1};
    Solution sc;
    cout << sc.kthCharacter(k,op) << endl;
    return 0;
}