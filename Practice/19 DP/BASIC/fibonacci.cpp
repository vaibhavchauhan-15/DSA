#include <iostream>
#include<vector>
using namespace std;   

int solveUsingRec(int n){ 
    //base case
    if(n==1 || n==0) return n;

    //recursive call
    int ans = solveUsingRec(n-1) + solveUsingRec(n-2);
}

//rec + memoization (top-> Down)
//step 1 create dp array
//step 2 store the ans in dp array
//step 3 resuse the stored ans 
long long solveUsingDp(int n ,vector<int>& dp ){
    //base case
    if(n==1 || n==0) return n;
    //skip calculate value
    if(dp[n]!=-1){
        return dp[n];
    }

    //store ans
    dp[n] = solveUsingDp(n-1 , dp ) + solveUsingDp(n-2 , dp);
    return dp[n];
}
//tabulation methond ( bottom -> up)
//step 1 create dp array
//step 2 fill the initial data using base case
//step 3 fill the rest of table using recursive relation
int solveUsingTab(int n , vector<int>& dp){
    //step 1
    // vector<int>dp(n+1,-1);

    //step 2 
    dp[0]=0;
    if(n>0) dp[1] = 1; //avoid size bubble

    
    //step 3 
    //always remember
    //after pasting the recusive logic change the parameter use dp array
    //also change the variable to use loop variable 

    //array ka size = n+1 so index move from 0 to n
    // dp[0] aur dp[1] filled ho gya
    //bacha  hua 2 se n tak fill karna hia
    for (int i = 2; i <= n; i++) {
        dp[i]=dp[i-1] + dp[i-2];
    }
    return dp[n];

}

int solveUsingTabSpaceOp(int n){
    int pre = 0;
    if(n==0 ) return 0;
    int curr = 1;
    if(n==1 ) return 1;
    int ans;
    for (int i = 2; i <= n; i++) {
        ans=curr + pre;
        //remember this changes
        pre=curr;
        curr=ans;
    }
    return ans;

}

int main() {
    int n;
    cout << "Enter the Value :";
    cin>>n;
    vector<int>dp(n+1 , -1);
    cout << "USing Memoization (Top->Down) Method : "<<solveUsingDp(n,dp) << endl;
    cout << "USing Tabulation (Bottom -> Up) Method  : "<<solveUsingTab(n , dp) << endl;
    cout << "USing Tabulation (Space Optimization) : "<<solveUsingTabSpaceOp(n) << endl;
    cout << "Using Rec : "<<solveUsingRec(n) << endl;
    return 0;
}
