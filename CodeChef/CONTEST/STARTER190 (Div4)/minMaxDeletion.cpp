#include <iostream>
#include <vector>
using namespace std;

void minMaxDeletion(int N, int Q, vector<int>& A) {
    long long score = 0;

    for (int i = 0; i < N - 1; i++) {
        score += (long long)min(A[i], A[i + 1]);
    }

    while (Q--) {
        int x, value;
        cin >> x >> value;
        x--; // Convert to 0-based index

        // Subtract old affected pairs
        if (x > 0)
            score -= (long long)min(A[x - 1], A[x]);
        if (x < N - 1)
            score -= (long long)min(A[x], A[x + 1]);

        // Update the value
        A[x] = value;

        // Add new affected pairs
        if (x > 0)
            score += (long long)min(A[x - 1], A[x]);
        if (x < N - 1)
            score += (long long)min(A[x], A[x + 1]);

        cout << score << '\n'; // Output after each update
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        minMaxDeletion(N, Q, A);
    }
    return 0;
}
