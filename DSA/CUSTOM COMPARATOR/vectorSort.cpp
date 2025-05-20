#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>v){
    for (int i = 0; i < v.size(); i++) {
        for (int j =0; j < v[i].size(); j++) {
            
            cout<<v[i][j] << " ";
        }
        cout <<endl;
    }
}

bool customComparator(vector<int>& a, vector<int>&b){
    // return a[1]<b[1];  //increasing order
    return a[1]>b[1];  //decreasing order
}
int main(){
    vector<vector<int>>v={{1,2},{1,3},{2,8},{0,0},{0,1},{1,9}};
    print(v);
    cout <<endl<< "Sorted by 0 index" <<endl;
    sort(v.begin(),v.end());
    print(v);
    cout <<endl<< "Sorted by 1 index" <<endl;
    sort(v.begin(),v.end(),customComparator);
    print(v);
    return 0;
}