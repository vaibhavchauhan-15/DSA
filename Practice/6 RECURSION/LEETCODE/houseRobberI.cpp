// 198. House Robber
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& arr, int index, int n) {

        // base case
        if (index >= n) {
            return 0;
        }
        // calculation
        int ans1 = arr[index] + maxSum(arr, index + 2, n); // include
        int ans2 = 0 + maxSum(arr, index + 1, n);          // exclude

        int finalAns = max(ans1, ans2);

        return finalAns;
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        int ans=maxSum(nums,0,size);
        return ans;
    }
};

int main(){
    vector<int>nums={2,7,9,3,1};
    Solution sc;
    cout << "Maximum amount is :"<<sc.rob(nums) <<endl;
    
    return 0;
}