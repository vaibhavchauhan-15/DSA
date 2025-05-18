//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int>& arr) {
        unordered_map<int, int> freq;
        int max_val = 0;
        for (int x : arr) {
            freq[x]++;
            max_val = max(max_val, x);
        }
        int max_diff = max_val + 100; // safe upper bound for difference
        vector<int> squares;
        for (int k = 1; k * k <= 2 * max_diff; ++k) {
            squares.push_back(k * k);
        }
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            freq[arr[i]]--;
            for (int sq : squares) {
                int b = arr[i] + sq;
                int c = arr[i] - sq;
                if (freq.count(b)) ans += freq[b];
                if (b != c && freq.count(c)) ans += freq[c];
            }
        }
        return ans / 2; // each pair counted twice
    }
};


//{ Driver Code Starts.

int main() {
    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int v;
        vector<int> a;
        while (ss >> v) {
            a.push_back(v);
        }
        Solution ob;
        cout << ob.countPairs(a) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends