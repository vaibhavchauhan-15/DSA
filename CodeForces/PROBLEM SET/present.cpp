#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Number of friends
    int n;
    cin >> n;
    
    // Array to store the result
    vector<int> giftGivers(n + 1);
    
    // Process the input
    for (int i = 1; i <= n; i++) {
        int receiver;
        cin >> receiver;
        
        // Friend i gave gift to receiver
        // So friend receiver received gift from i
        giftGivers[receiver] = i;
    }
    
    // Output the result
    for (int i = 1; i <= n; i++) {
        cout << giftGivers[i];
        
        // Add space after each number except the last one
        if (i < n) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}
