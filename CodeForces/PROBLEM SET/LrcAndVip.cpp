#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check if all elements are the same
        bool allSame = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                allSame = false;
                break;
            }
        }
        
        if (allSame) {
            cout << "No\n";
            continue;
        }
        
        // Try putting one element in B and rest in C
        bool foundSolution = false;
        vector<int> solution(n, 2); // All in C initially
        
        for (int i = 0; i < n && !foundSolution; i++) {
            solution[i] = 1; // Move element i to B
            
            int gcdB = a[i];
            int gcdC = 0;
            bool hasC = false;
            
            for (int j = 0; j < n; j++) {
                if (solution[j] == 2) {
                    if (!hasC) {
                        gcdC = a[j];
                        hasC = true;
                    } else {
                        gcdC = __gcd(gcdC, a[j]);
                    }
                }
            }
            
            if (hasC && gcdB != gcdC) {
                foundSolution = true;
                break;
            }
            
            solution[i] = 2; // Move back to C
        }
        
        // If no solution yet, try putting one element in C and rest in B
        if (!foundSolution) {
            solution.assign(n, 1); // All in B initially
            
            for (int i = 0; i < n && !foundSolution; i++) {
                solution[i] = 2; // Move element i to C
                
                int gcdC = a[i];
                int gcdB = 0;
                bool hasB = false;
                
                for (int j = 0; j < n; j++) {
                    if (solution[j] == 1) {
                        if (!hasB) {
                            gcdB = a[j];
                            hasB = true;
                        } else {
                            gcdB = __gcd(gcdB, a[j]);
                        }
                    }
                }
                
                if (hasB && gcdB != gcdC) {
                    foundSolution = true;
                    break;
                }
                
                solution[i] = 1; // Move back to B
            }
        }
        
        // Output the result
        if (!foundSolution) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            for (int i = 0; i < n; i++) {
                cout << solution[i] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}
