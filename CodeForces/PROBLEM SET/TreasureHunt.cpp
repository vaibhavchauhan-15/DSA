#include <iostream>
using namespace std;

int main() {
    int testCount;
    cin >> testCount;
    while (testCount--) {
        long long bDig, kDig, depth;
        cin >> bDig >> kDig >> depth;

        long long roundSum = bDig + kDig;
        long long fullRounds = depth / roundSum;
        long long currentDepth = fullRounds * roundSum;

        if (currentDepth + bDig > depth)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
    
}
