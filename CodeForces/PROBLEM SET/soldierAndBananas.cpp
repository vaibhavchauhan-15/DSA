#include <iostream>
using namespace std;

int main() {
    // k: cost of first banana
    // n: initial dollars the soldier has
    // w: number of bananas the soldier wants to buy
    int k, w;
    long long n; // Using long long for n since it can be up to 10^9
    
    // Read input
    cin >> k >> n >> w;
    
    // Calculate total cost of all bananas
    // Total cost = k + 2k + 3k + ... + w*k = k * (1 + 2 + ... + w) = k * w * (w + 1) / 2
    long long totalCost = (long long)k * w * (w + 1) / 2;
    
    // Calculate how much money the soldier needs to borrow
    long long moneyToBorrow = totalCost - n;
    
    // If the soldier has enough money, output 0
    if (moneyToBorrow <= 0) {
        moneyToBorrow = 0;
    }
    
    // Output the result
    cout << moneyToBorrow << endl;
    
    return 0;
}
