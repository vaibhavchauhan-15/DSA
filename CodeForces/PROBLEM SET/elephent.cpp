#include <iostream>
using namespace std;

int main() {
    // Target position (friend's house)
    int friendPosition;
    cin >> friendPosition;
    
    // Calculate minimum steps
    // Since the elephant can move at most 5 positions in one step,
    // we divide the target position by 5 and round up
    int minimumSteps = (friendPosition + 4) / 5; // Ceiling division
    
    // Output the result
    cout << minimumSteps << endl;
    
    return 0;
}