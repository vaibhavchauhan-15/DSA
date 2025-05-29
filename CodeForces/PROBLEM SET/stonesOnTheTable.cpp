#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the number of stones
    int numberOfStones;
    cin >> numberOfStones;
    
    // Read the colors of stones
    string stoneColors;
    cin >> stoneColors;
    
    // Count stones to remove
    int stonesToRemove = 0;
    
    // Check each adjacent pair of stones
    for (int i = 1; i < numberOfStones; i++) {
        // If current stone has same color as previous stone, it needs to be removed
        if (stoneColors[i] == stoneColors[i - 1]) {
            stonesToRemove++;
        }
    }
    
    // Output the result
    cout << stonesToRemove << endl;
    
    return 0;
}