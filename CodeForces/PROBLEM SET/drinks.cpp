#include <iostream>
#include <iomanip>  // For std::fixed and std::setprecision
using namespace std;

int main() {
    // Number of drinks
    int n;
    cin >> n;
    
    // Variable to store the sum of percentages
    double totalPercentage = 0.0;
    
    // Read and sum the percentages
    for (int i = 0; i < n; i++) {
        double percentage;
        cin >> percentage;
        totalPercentage += percentage;
    }
    
    // Calculate the average percentage
    double averagePercentage = totalPercentage / n;
    
    // Output the result with required precision
    cout << fixed << setprecision(12) << averagePercentage << endl;
    
    return 0; 
} 
