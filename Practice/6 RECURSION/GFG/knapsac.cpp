//0/1 knapsack (gfg)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:

    int solve(int capacity, vector<int> &val, vector<int> &wt, int index){
        //base case
        if(index==0){
            if(wt[index]<=capacity){
                return val[index];
            }else{
                return 0;
            }
        }

        //include
        int include=0;
        if(wt[index]<=capacity){
            include=val[index] + solve(capacity-wt[index],val,wt,index-1);
        }
        //exclude
        int exclude = solve(capacity,val,wt,index-1);
        return max(include , exclude);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        int index=n-1;
        int ans =solve(W,val,wt,index);
        return ans;
        
    }
};

int main(){
   int  W = 5;
    vector<int>  val = {10, 40, 30, 50};
    vector<int>   wt ={ 5, 4, 2, 3}; 

    Solution sc;
    cout << "Maximum value is :"<<sc.knapsack(W, val , wt) <<endl;
    return 0;
}