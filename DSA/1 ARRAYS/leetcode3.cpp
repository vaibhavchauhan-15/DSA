#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> candy(n, 1);
        for (int i = 0; i < n; i++)
        {
            if (i + 1 <=n && ratings[i] > ratings[i + 1] )
            {
                candy[i] += 1;
            }else if(i - 1 >=0 && ratings[i] > ratings[i - 1]){
                candy[i] += 1;
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