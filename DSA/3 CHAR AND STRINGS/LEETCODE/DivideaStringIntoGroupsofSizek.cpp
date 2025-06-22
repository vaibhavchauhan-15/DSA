
// 2138. Divide a String Into Groups of Size k

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
     int n = s.size();
    int groups = (n + k - 1) / k;
    vector<string> result(groups);
    
    for (int i = 0; i < groups; i++) {
        string group;
        for (int j = 0; j < k; j++) {
            int index = i * k + j;
            if (index < n) {
                group += s[index];
            } else {
                group += fill; // Padding
            }
        }
        result[i] = group;
    }
    
    return result;
    }
};Fix formatting by adding a new line before the main function
int main(){
    
    return 0;
}