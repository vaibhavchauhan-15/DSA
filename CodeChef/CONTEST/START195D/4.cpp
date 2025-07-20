#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxCoins = 2 * n;
        vector<vector<long long>> dp(n + 1, vector<long long>(maxCoins + 1, -1));
        dp[0][0] = 0;

        for (int i = 0; i < n; i++) {
            for (int coins = 0; coins <= maxCoins; coins++) {
                if (dp[i][coins] == -1) continue;

                long long sum = dp[i][coins];
                int count = i;

                dp[i + 1][coins] = max(dp[i + 1][coins], sum);

                if (coins + 1 <= maxCoins) {
                    dp[i + 1][coins + 1] = max(dp[i + 1][coins + 1], sum + arr[i]);
                }

                if (coins + 2 <= maxCoins) {
                    dp[i + 1][coins + 2] = max(dp[i + 1][coins + 2], sum + arr[i] + count);
                }
            }
        }

        for (int k = 1; k <= maxCoins; k++) {
            long long valid = 0;
            for (int i = 0; i <= n; i++) {
                valid = max(valid, dp[i][k]);
            }
            cout << valid << " ";
        }

        cout << endl;
    }

    return 0;   
}
