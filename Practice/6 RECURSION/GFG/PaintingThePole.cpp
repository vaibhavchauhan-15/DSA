// Painting the Fence
#include<iostream>
using namespace std;

class Solution {
  public:
    int countWays(int n, int k) {
        // code here

        //base case
        if(n==1){
            return k;
        }
        if(n==2){
            return k+  k*(k-1);
        }

        int ans=(k-1)*(countWays(n-2,k)+ countWays(n-1,k));
        return ans;
        
    }
};

int main(){
    int n,k;cin>>n>>k;
    Solution sc;
    cout << "Total ways to paint the fence is :"<<sc.countWays(n,k) <<endl;
    return 0;
}