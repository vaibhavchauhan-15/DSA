#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        //  lambda fun
        auto sortDigit = [](int x){
            string s= to_string(x);
            sort(s.begin() , s.end());
            return s;
        };
        string target = sortDigit(n);

        for (int i = 0; i < 30; i++) {
            if(target == sortDigit(1<<i)){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sc;
    int n;
    cin >> n;
    cout << (sc.reorderedPowerOf2(n) ? "true" : "false") << endl;
}