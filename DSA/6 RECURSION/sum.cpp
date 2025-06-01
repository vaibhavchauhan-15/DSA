#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    //base case
    if(n==1){
        return 1;
    }
    //processign
    long long ans = n + sum(n-1);

    return ans;
    

}

int main(){
    cout << "Enter a Number :";
    int n;cin>>n;
    cout<<sum(n);
    return 0;
}