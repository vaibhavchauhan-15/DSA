#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr(5, vector<int>(5,10));
    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j =0; j < arr[i].size(); j++) {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    vector<int>v1(2,0);
    vector<int>v2(5,1);
    vector<int>v3(7,2);
    vector<int>v4(9,3);
    vector<int>v5(1,4);
    vector<vector<int>> brr;
    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);


    for (int i = 0; i < brr.size(); i++) {
        for (int j =0; j < brr[i].size(); j++) {
            // cout<<brr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl<<brr[1].size();


    return 0;
}