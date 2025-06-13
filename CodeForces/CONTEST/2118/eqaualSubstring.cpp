#include <iostream>
#include <string>
using namespace std;

void solveSubstring(int n, int k) {
    for (int i = 0; i < k; i++) {

        cout << '1';
    }
    for (int i = 0; i < n - k; i++) {
        cout << '0';
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        solveSubstring(n, k);
    }
    return 0;
}
