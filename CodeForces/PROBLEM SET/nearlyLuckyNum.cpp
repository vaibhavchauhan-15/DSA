#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is lucky (contains only digits 4 and 7)
bool isLuckyNumber(long long num) {
    // Special case: 0 is not lucky
    if (num == 0) {
        return false;
    }
    
    // Check each digit
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    
    return true;
}

int main() {
    // Input number as string to handle numbers up to 10^18
    string numberStr;
    cin >> numberStr;
    
    // Count lucky digits (4 and 7)
    int luckyDigitCount = 0;
    for (char digit : numberStr) {
        if (digit == '4' || digit == '7') {
            luckyDigitCount++;
        }
    }
    
    // Check if count of lucky digits is itself a lucky number
    if (isLuckyNumber(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
     
    
    return 0;
}