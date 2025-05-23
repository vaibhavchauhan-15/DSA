#include<bits/stdc++.h>
using namespace std;

int smallestIndex(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int sum = 0, x = nums[i];
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum == i) {
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,10,11};
    int result=smallestIndex(nums);
    if(result==-1){
        cout << "No Such Index Exist!!!" <<endl;
    }else{
        cout << "Smalles index is :"<<result <<endl;
    }
    return 0;
}