#include <iostream>
#include<vector>
#include<climits>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        // vector<int> st(101 , -1);
        unordered_set<int >st;

        int sum=0;
        int maxNeg = INT_MIN;

        for(int & num : nums){
            if(num<=0){
                maxNeg = max(maxNeg , num);
            // }else if ( st[num]==-1){
            }else if ( !st.count(num)){
                sum+=num;
                // st[num]=1;
                st.insert(num);
            }
        }
        return sum==0 ? maxNeg : sum;
    }
};

int main() {
    vector<int> nums ={1,1,0,1,1};
    Solution s;
    cout<<s.maxSum(nums)<<endl;
    return 0;
}