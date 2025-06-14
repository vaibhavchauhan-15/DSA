// Disarrangement of balls
#include<iostream>
using namespace std;

class Solution {
  public:
    int countDer(int n) {
        if(n==1){
            return  0;
        }
        if(n==2){
            return 1;
        }
        int ans = (n-1)*(countDer(n-2)+countDer(n-1));
        return ans;
    }
};

int main(){
    int n;cin>>n;
    Solution sc;
    cout << "Total dearrangement ways is : "<<sc.countDer(n) <<endl;
    return 0;
}