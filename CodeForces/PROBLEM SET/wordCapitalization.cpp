#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read the input word
    string word;
    cin >> word;
    
    // Capitalize the first letter if the string is not empty
    if (!word.empty()) {
        word[0] = toupper(word[0]);
    }
    
    // Output the capitalized word
    cout << word << endl;
    
    return 0;
}