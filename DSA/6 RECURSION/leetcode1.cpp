// 70. Climbing Stairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        //base case
        if(n==1 || n==0){
            return 1;
        }
        //prosecing and rc
        int ans=climbStairs(n-1) + climbStairs(n-2);
        return ans;
    }
};

int main(){
    cout<<"Enter a Last Stairs Number :";
    int n;cin>>n;
    Solution sc;
    cout<<sc.climbStairs(n);
    return 0;
}