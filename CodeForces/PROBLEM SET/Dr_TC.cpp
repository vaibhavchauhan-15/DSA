#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ones = 0;
        for (char c : s) {
            if (c == '1') ones++;
        }
        // Each row flips one bit, so each 0 in s becomes a 1 in one row
        int total_ones = ones * (n - 1) + (n - ones);
        cout << total_ones << endl;
    }
    return 0;
}
