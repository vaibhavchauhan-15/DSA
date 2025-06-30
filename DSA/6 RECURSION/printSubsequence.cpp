#include<iostream>
#include<vector>
using namespace std;

void print(int index , vector<int > nums , vector<int> subq){
    //base case
    if(index==nums.size()){
        //print current subseq
        cout<<"[";
        for (int i = 0; i < subq.size(); i++) {
            cout<<subq[i];
            if(i!=subq.size()-1){
                cout<<", ";
            }
        }
        cout << "]" <<endl;
        return;
    }     
    //operation
    subq.push_back(nums[index]);
    print(index+1 , nums , subq);
    //backtract
    subq.pop_back();
    print(index+1 , nums , subq);
}

void printAllSubSequence(vector<int>nums){
    
    vector<int>subq;

    print(0,nums,subq);
    return;
}
int main(){
    vector<int>nums={1,2,3};
    printAllSubSequence(nums);
    return 0;
}