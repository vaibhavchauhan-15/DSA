//INTERSECTION OF ARRAY


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3};
    vector<int>brr{1,5};
    vector<int>ans;
    // intersection
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=0;j<brr.size();j++){
            if(element == brr[j] ){
                ans.push_back(element);
            }
        }
    }
    for(auto value :ans){
        cout<<value<<" ";
    }
return 0;
}