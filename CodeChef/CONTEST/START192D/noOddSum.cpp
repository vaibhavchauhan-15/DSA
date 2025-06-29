#include<iostream>
using namespace std;

int minOperation(int arr[], int n) {
    int countOne = 0;
    int countTwo = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1){

            countOne++;
        }
        else{
            
            countTwo++;
        } 
    }

    // Case 1: Try converting all to 1s
    int opToAllOne = countTwo;

    // Case 2: Try converting all to 2s
    int opToAllTwo = countOne / 2;
    if (countOne % 2 != 0) {
        // One unpaired 1 remains
        if (countTwo >= 1)
            opToAllTwo += 2; // one op to get extra 1
            opToAllTwo = 1e9; // impossible
    }

    return min(opToAllOne, opToAllTwo);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << minOperation(arr, n) << endl;
    }
    return 0;
}
