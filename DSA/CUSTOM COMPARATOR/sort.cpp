#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i] << " ";
    }
}
bool customComparater(int & a,int& b){
    return a<b;//incrasing order
    // return a>b;//Decreasing order
}
int main(){
    vector<int>v={46,54,46,4,3,2,1};
    cout << "without sort" <<endl;
    print(v);
    sort(v.begin(),v.end());//increasing order
    cout <<endl<< "Increasing Order" <<endl;
    print(v);

    sort(v.rbegin(),v.rend());//Decrease order
    cout <<endl<< "Descreasing Order" <<endl;
    print(v);
    cout <<endl<< "using custom ";
    sort(v.begin(),v.end(),customComparater);//Decrease order
    cout <<endl<< "Descreasing Order" <<endl;
    print(v);
    
    return 0;
}