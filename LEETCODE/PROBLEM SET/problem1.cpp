#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int count[26] = {0};

    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            count[c - 'a']++;
        else if (c >= 'A' && c <= 'Z')
            count[c - 'A']++;
    }

    char maxChar = 'a';
    int maxCount = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0)
            cout << char('a' + i) << " = " << count[i] << endl;

        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = 'a' + i;
        }
    }

    cout << "Maximum repeated character: " << maxChar << " = " << maxCount << endl;

    return 0;
}
