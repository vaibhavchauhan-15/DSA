#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int digitCount[10] = {0};

        // Count frequency of each digit in the input
        for (int digit : digits) {
            digitCount[digit]++;
        }

        set<int> result; // to store unique 3-digit even numbers

        // Check every 3-digit number from 100 to 999
        for (int num = 100; num <= 999; num++) {
            if (num % 2 != 0) continue; // Skip if number is not even

            int hundreds = num / 100;
            int tens = (num / 10) % 10;
            int ones = num % 10;

            // Count digits used in this number
            int numCount[10] = {0};
            numCount[hundreds]++;
            numCount[tens]++;
            numCount[ones]++;

            bool isValid = true;

            // Check if we have enough digits in the input to form this number
            for (int d = 0; d <= 9; d++) {
                if (numCount[d] > digitCount[d]) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                result.insert(num); // Store valid number
            }
        }

        // Convert set to sorted vector
        return vector<int>(result.begin(), result.end());
    }
};
