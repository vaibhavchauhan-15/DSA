#include<bits/stdc++.h>
using namespace std;

int main() {
    // Input word
    string word;
    cin >> word;
    
    // Count uppercase and lowercase letters
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    
    for (char letter : word) {
        if (isupper(letter)) {
            uppercaseCount++;
        } else {
            lowercaseCount++;
        }
    }
    
    // Convert the word based on the count
    string result = word;
    
    if (uppercaseCount > lowercaseCount) {
        // Change to all uppercase
        for (int i = 0; i < word.length(); i++) {
            result[i] = toupper(word[i]);
        }
    } else {
        // Change to all lowercase (includes the case when counts are equal)
        for (int i = 0; i < word.length(); i++) {
            result[i] = tolower(word[i]);
        }
    }
    
    // Output the result
    cout << result << endl;
    
    return 0;
}