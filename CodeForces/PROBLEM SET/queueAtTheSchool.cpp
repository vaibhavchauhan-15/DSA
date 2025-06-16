#include<iostream>
#include<string>
using namespace std;

int main(){
    // Read input: number of children (n) and time (t)
    int n, t;
    cin >> n >> t;
    
    // Read initial queue arrangement
    string queue;
    cin >> queue;
    
    // Simulate t seconds
    for (int second = 0; second < t; second++) {
        // Create a copy of the queue to track changes
        string newQueue = queue;
        
        // Process each position in the queue
        for (int pos = 0; pos < n - 1; pos++) {
            // If a boy is followed by a girl, swap them
            if (queue[pos] == 'B' && queue[pos + 1] == 'G') {
                newQueue[pos] = 'G';
                newQueue[pos + 1] = 'B';
            }
        }
        

        // Update the queue for the next second
        queue = newQueue;
    }

    // Output the final arrangement
    cout << queue << endl;
    
    return 0;
}