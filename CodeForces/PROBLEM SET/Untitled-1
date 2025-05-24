#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> nums;
    for (char c : s) {
        if (c != '+') nums.push_back(c - '0');
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i) {
        if (i > 0) cout << "+";
        cout << nums[i];
    }
    cout << endl;
    return 0;
}
