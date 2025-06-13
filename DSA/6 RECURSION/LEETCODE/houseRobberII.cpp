// 213. House Robber II
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxAmount(vector<int>&nums , int s , int e){
        //base case
        if(s>e){
            return 0;
        }
        //calculation
        //include
        int ans1 = nums[s]+maxAmount(nums,s+2,e);
        //exclude
        int ans2 = 0 + maxAmount(nums , s+1 , e);
        return max(ans1 , ans2);
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        //handle single element seprately(yaha galti hoga yad rakhna)
        if(size==1){
            return nums[0];
        }
        //rob house one and leave house last(neighbour)
        int option1=maxAmount(nums,0,size-2);
        //rob house last and leave house first(neighbour)
        int option2=maxAmount(nums,1,size-1);
        return max(option1,option2);
    }
};

int main(){
    vector<int>nums={1,2,3,1};
    Solution sc;
    cout << "Maximum amount in th circular house is :"<<sc.rob(nums) <<endl;
    return 0;
}