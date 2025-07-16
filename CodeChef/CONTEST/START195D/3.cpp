#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> marbles(n);
        set<int> collection;

        for (int i = 0; i < n; i++) {
            cin >> marbles[i];
            collection.insert(marbles[i]);
        }
        int notCollected = m - collection.size();
        cout << notCollected << endl;
    }

    return 0;
}
