// 287. Find the Duplicate Number


// not correct

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int i = 1;
        int j = n-1;
        while (i < n)
        {
            if (nums[i] == nums[j])
            {
                return nums[i];
            }
            else if (i >= j){
                i++;



                j=n-1;

            }
            else if (i  < j  && i != j)
                j--;

        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 3, 5};
    Solution sc;
    int ans = sc.findDuplicate(nums);
    cout << "Duplicate number is :" << ans << endl;
    return 0;
}