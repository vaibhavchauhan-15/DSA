#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i+1<n){
                int diff=abs(nums[i]- nums[i+1]);
                maxi=max(maxi,diff);
            }
        } 
        return maxi;   
    }
};

int main(){
    vector<int>nums={-5,-10,-5};
    Solution sc;
    cout<<sc.maxAdjacentDistance(nums)<<endl;
    return 0;
}