#include<bits/stdc++.h>
#include<vector>
using namespace std;

void sortColor(vector<int>& nums ){
    int n=nums.size();
    int index=0;
    int left=0;
    int right=n-1;
    while(nums[index]<=right){
        if(nums[index]==0 ){
            swap(nums[index] , nums[left]);
            left++;
            index++;
        }else if(nums[index]==2 ){
            swap(nums[index],nums[right]);
            right--;//no need of index++ 

        }else{
            index++;
        }
    }
    
    cout<<"sorted vector are :";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    

}


int main(){
    vector<int> nums={0 ,0 ,1, 2 ,1 ,2 };
    sortColor(nums);
}