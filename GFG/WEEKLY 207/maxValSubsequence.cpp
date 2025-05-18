//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long maxValue(vector<int>& arr) {
        // Sort the array in descending order to maximize the value
        sort(arr.begin(), arr.end(), greater<int>());
        
        long long sum = 0;
        int n = arr.size();
        
        // Calculate the sum of (element - position)
        // Each element is at position i+1 (1-indexed)
        for(int i = 0; i < n; i++) {
            long long val = (long long)arr[i] - (i + 1);
            if(val > 0) sum += val;
        }
        
        return sum;
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
        long long res = ob.maxValue(a);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends