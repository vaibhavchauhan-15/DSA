#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        
        int length = word.length();
        
        if (length > 10) {
            // Abbreviate the word: first letter + count of middle letters + last letter
            cout << word[0] << length - 2 << word[length - 1] << endl;
        } else {
            // Word is not too long, print as is
            cout << word << endl;
        }
    }
    
    return 0;
}