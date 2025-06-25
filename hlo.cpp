#include<bits/stdc++.h>
using namespace std; 
int main(){
    vector<int>oddTime;
    vector<int>evenTime;
    for (int i = 1; i <= 10; i++) {
        if(i%2==0){
            evenTime.push_back(i); 
        }else{
            oddTime.push_back(i);
        }
    }
    cout << "Print even " <<endl;
    for (int i = 0; i < evenTime.size(); i++) {
        cout << evenTime[i] <<" ";
    }
    cout <<endl<< "Print odd " <<endl;
    for (int i = 0; i < oddTime.size(); i++) {
        cout << oddTime[i] <<" ";
    }
    return 0;
}
