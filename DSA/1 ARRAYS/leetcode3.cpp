// 287. Find the Duplicate Number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int >arr;
        int n=nums.size();
        for(int i : nums){
            arr.push_back(i);
        }

        sort(arr.begin(),arr.end());
        for (int i = 0; i < n; i++) {
            if(arr[i]==arr[i+1]){
                return arr[i];
            }
        }

        return -1;  
    }
};

int main(){
    vector<int > nums={1,1,3,4,2};
    Solution sc;
    cout<<sc.findDuplicate(nums)<<endl;
    return 0;
}