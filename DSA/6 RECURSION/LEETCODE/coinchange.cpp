#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

class Solution {
public:

    int solve(vector<int>& coins, int amount){
        //base case
        if(amount==0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }
        //opertion
        int mini=INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            int ans=solve(coins , amount - coins[i]);
            if(ans!=INT_MAX){

                mini=min(mini, 1+ans);  
            }
        }
        return mini;
    }

    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins,amount);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};



int main(){
   vector<int> coins={1,2,5,10};
   int amount=11;
   Solution sc;
   cout << "Minimum coin for amount is:"<<sc.coinChange(coins,amount) <<endl; 
    return 0;
}