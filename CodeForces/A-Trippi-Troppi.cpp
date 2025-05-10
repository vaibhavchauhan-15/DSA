#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        string a, b, c;
        cin >> a >> b >> c; // Read three strings
        // Output the first character of each string
        cout << a[0] << b[0] << c[0] << endl;
    }
    return 0;
}
