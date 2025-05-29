#include <iostream>
using namespace std;

int main() {
    // Initial weights of Limak and Bob
    int limakWeight, bobWeight;
    
    // Read input weights
    cin >> limakWeight >> bobWeight;
    
    // Counter for years
    int years = 0;
    
    // Continue until Limak becomes strictly heavier than Bob
    while (limakWeight <= bobWeight) {
        // Limak's weight triples each year
        limakWeight *= 3;
        
        // Bob's weight doubles each year
        bobWeight *= 2;
        
        // One more year has passed
        years++;
    }
    
    // Print the result
    cout << years << endl;
    
    return 0;
}