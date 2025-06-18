#include <iostream>
using namespace std;

int main() {
    // Using long long to handle large inputs up to 10^15
    long long n;
    cin >> n;
    
    /* 
    We can observe a pattern:
    For even n: f(n) = n/2
    For odd n:  f(n) = -(n+1)/2
    
    This is because:
    - For even n = 2k: f(n) = (-1+2) + (-3+4) + ... + (-(2k-1)+2k) = 1 + 1 + ... + 1 = k = n/2
    - For odd n = 2k+1: f(n) = (-1+2) + (-3+4) + ... + (-(2k-1)+2k) - (2k+1) = k - (2k+1) = -(k+1) = -(n+1)/2
    */
    
    long long result;
    if (n % 2 == 0) {
        // Even case
        result = n / 2;
    } else {
        // Odd case
        result = -((n + 1) / 2);
    }
    
    cout << result << endl;
    
    return 0;
}
