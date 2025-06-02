#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> candy(n, 1);
         // Left to right
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candy[i] = candy[i - 1] + 1;
            }
        }

        // Right to left
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candy[i] = max(candy[i], candy[i + 1] + 1);
            }
        }
        int totalCandy = 0;
        for (int i = 0; i < n; i++)
        {
            totalCandy += candy[i];
        }
        return totalCandy;
    }
};

int main()
{
    vector<int> ratings = {1,2,2};
    Solution sc;
    cout << "Total candy is :" << sc.candy(ratings) << endl;
    return 0;
}