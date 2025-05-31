#include <iostream>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        long long a, b, c, d;cin >> a >> b >> c >> d;
        if (2 * d - 1 < 2 * c) {
            cout << "Gellyfish" << endl;
        } else {
            cout << "Flower" << endl;
        }
    }



    
    return 0;
}
