#include <iostream>
using namespace std;

int main() {
    // Number of people
    int numberOfPeople;
    cin >> numberOfPeople;
    
    bool isProblemHard = false;
    
    // Read the opinions
    for (int i = 0; i < numberOfPeople; ++i) {
        int opinion;
        cin >> opinion;
        
        // If anyone thinks it's hard, the problem is hard
        if (opinion == 1) {
            isProblemHard = true;
        }
    }
    
    // Output the result
    if (isProblemHard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    
    
    return 0;
}