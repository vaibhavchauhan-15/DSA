#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string username;
    cin >> username;
    
    // Using unordered_set to count distinct characters
    unordered_set<char> distinctChars;
    
    // Insert each character into the set
    for (char ch : username) {
        distinctChars.insert(ch);
    }
    
    // Check if number of distinct characters is odd or even
    if (distinctChars.size() % 2 == 1) {
        // Odd number of distinct characters -> male
        cout << "IGNORE HIM!" << endl;
    } else {
        // Even number of distinct characters -> female
        cout << "CHAT WITH HER!" << endl;
    }
    
    return 0;
}