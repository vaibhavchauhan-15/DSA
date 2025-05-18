#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    
    // For both parts to be even, the total weight must be even
    // and greater than 2 (since each part must be positive)
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}