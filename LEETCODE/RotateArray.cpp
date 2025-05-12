#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> & nums , int k){
   int n = nums.size();
    vector<int> ans(n);
    for(int i=0;i<nums.size();i++){
        int newIndex=(i + k) % n;
        ans[newIndex]=nums[i];      
    }

    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
    
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums , k);
    return 0;
}