#include<iostream>
using namespace std;

int main(){
    // Number of stops
    int n;
    cin >> n;
    
    int currentPassengers = 0;  // Current number of passengers in the tram
    int minCapacity = 0;        // Minimum capacity required
    
    for (int i = 0; i < n; i++) {
        int exitPassengers, enterPassengers;
        cin >> exitPassengers >> enterPassengers;
        
        // Update the current number of passengers
        currentPassengers -= exitPassengers;  // Passengers exit
        currentPassengers += enterPassengers; // Passengers enter
        
        // Update the minimum capacity if needed
        if (currentPassengers > minCapacity) {
            minCapacity = currentPassengers;
        }
    }

    

    
    // Output the result
    cout << minCapacity << endl;
    
    return 0;
}